project(windows_msi_installer)

if (NOT DEFINED CMAKE_WIX_COMPILER)
    find_program(CANDLE_PATH
        NAMES "candle.exe"
        PATHS "C:/Program Files (x86)/WiX Toolset v3.11/bin"
    )

    find_program(LIGHT_PATH
        NAMES "light.exe"
        PATHS "C:/Program Files (x86)/WiX Toolset v3.11/bin"
    )

    if ((NOT "${CANDLE_PATH}" MATCHES "CANDLE_PATH-NOTFOUND") AND (NOT "${LIGHT_PATH}" MATCHES "LIGHT_PATH-NOTFOUND"))
        set(CMAKE_WIX_COMPILER "${CANDLE_PATH}")
        set(CMAKE_WIX_LINKER "${LIGHT_PATH}")
    endif ()
endif ()

if (NOT DEFINED CMAKE_WIX_COMPILER)
    message(STATUS "The MSI installer will not be generated becase the WiX toolset was not found. You can download it from http://wixtoolset.org")

else ()
    message(" > Generating target: ${PROJECT_NAME}")

    set(INSTALLER_NAME "trailofbits_mcsema")
    set(INSTALLER_SRCFILE "${CMAKE_CURRENT_SOURCE_DIR}/${INSTALLER_NAME}.wxs")
    set(INSTALLER_OBJECT_FILE "${CMAKE_CURRENT_BINARY_DIR}/${INSTALLER_NAME}.wixobj")

    add_custom_command(OUTPUT "${INSTALLER_OBJECT_FILE}"
        COMMAND "${CMAKE_WIX_COMPILER}" "${INSTALLER_SRCFILE}"
        DEPENDS "${INSTALLER_SRCFILE}"
        COMMENT "Generating: ${INSTALLER_OBJECT_FILE}"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
    )

    set(INSTALLER_MSI_FILE "${CMAKE_CURRENT_BINARY_DIR}/${INSTALLER_NAME}.msi")

    add_custom_command(OUTPUT "${INSTALLER_MSI_FILE}"
        COMMAND "${CMAKE_WIX_LINKER}" "${INSTALLER_OBJECT_FILE}"
        DEPENDS "${INSTALLER_OBJECT_FILE}"
        COMMENT "Generating: ${INSTALLER_MSI_FILE}"
        WORKING_DIRECTORY "${CMAKE_INSTALL_PREFIX}"
    )

    add_custom_target(${PROJECT_NAME} ALL DEPENDS "${INSTALLER_MSI_FILE}")
    add_dependencies(mcsema-lift ${PROJECT_NAME})
endif ()
