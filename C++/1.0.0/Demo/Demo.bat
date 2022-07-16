@echo off

echo Compiling 'Demo.cpp' to an executable
g++ Demo.cpp -L./../Builds/Static -lTypes -o Demo.exe

echo Running 'Demo.exe'
Demo.exe