@echo off

cls
rmdir /s /q build\mcsema-build
rmdir /s /q build\mcsema-install

python installer.py --install-deps

