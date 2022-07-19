@echo off

echo Compiling 'Demo.cpp' to an executable
g++ Demo.cpp -L./Libs -lTypes -o Demo.exe

echo Running 'Demo.exe'
Demo.exe