#!/usr/bin/env bash
source setup_utils.sh.inc

function main
{
    if [ $# -eq 1 ] ; then
        local install_prefix="$1"
    else
        local install_prefix="/usr"
    fi

    CompileMcSema "${install_prefix}"
    if [ $? -ne 0 ] ; then
        printf "McSema could not be compiled. Aborting...\n"
        return 1
    fi

    InstallMcSema
    if [ $? -ne 0 ] ; then
        printf "McSema could not be installed. Aborting...\n"
        return 1
    fi

    printf "McSema has been installed under the following folder: ${install_prefix}\n\n"
    printf "The python plugin for IDA Pro has been installed inside the following folder: ${install_prefix}/share/mcsema/ida_plugin_installer\n"

    read -p "Would you like to run the installer with the default python2 interpreter? [y/n]" answer
    case $answer in
        [Yy]*)
            printf "Running installer: ${install_prefix}/share/mcsema/ida_plugin_installer/setup.py\n"
            if [[ "$OSTYPE" == "darwin"* ]] ; then
                # python install on osx travis (and maybe normal osx with homebrew?) is broken, workaround
                python2 ${install_prefix}/share/mcsema/ida_plugin_installer/setup.py install --user --prefix= --install-scripts "${install_prefix}/bin"
            else
                python2 ${install_prefix}/share/mcsema/ida_plugin_installer/setup.py install --user --install-scripts "${install_prefix}/bin"
            fi

            if [ $? -ne 0 ] ; then
                printf "Failed to install the plugin!\n"
                return 1
            fi
        ;;

        [Nn]*)
            printf "\nExecute the following command using your python2 interpreter:\n"
            printf "    python2 ${install_prefix}/share/mcsema/ida_plugin_installer/setup.py install --user --install-scripts \"${install_prefix}/bin\"\n\n"

            return 0
        ;;

        *)
            printf "Invalid choice entered. Aborting...\n"
            return 1
        ;;
    esac

    return 0
}

main $@
exit $?

