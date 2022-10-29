@REM /*                                    *\
@REM  *          Gius Corporation          *
@REM  *      All rights are reserved.      *
@REM  *                                    *
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 01.X.2022                 *
@REM  *  - Name: Demo-Win.bat              *
@REM  *  - Notes: A script to compile      *
@REM  *     Demo.cpp on Windows platform.  *
@REM \*                                    */

@echo off

echo Compiling 'Demo.cpp' to an executable
g++ Demo.cpp -L./Libs -lTypes -o Demo.exe

echo Running 'Demo.exe'
Demo.exe