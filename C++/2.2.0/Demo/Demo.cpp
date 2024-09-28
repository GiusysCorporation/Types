/*                                    *\
 *          Gius Corporation          *
 *      All rights are reserved.      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 03.X.2022                 *
 *  - Last Modified: 27.IX.2024       *
 *  - Name: Demo.cpp                  *
 *  - Notes: This file can be compiled*
 *     by the users to have a demo of *
 *     the library.                   *
\*                                    */

#include <iostream>
#include "../Headers/Primitives/Int.hpp"
#include "../Headers/Primitives/Float.hpp"
#include "../Headers/Primitives/Double.hpp"
#include "../Headers/Primitives/Bool.hpp"
#include "../Headers/Primitives/Char.hpp"

using namespace Org::Gius::Types::Primitives;

void demoInt();
void demoFloat();
void demoDouble();
void demoBool();
void demoChar();

int main() {
    char o = ' ';
    std::cout << "Do you want to try the demo for the integers (I), for the floats (F), for the doubles (D), for the bools (B) or for the chars (C)? ";
    std::cin >> o;

    if(o == 'I') demoInt();
    else if(o == 'F') demoFloat();
    else if(o == 'D') demoDouble();
    else if(o == 'B') demoBool();
    else if(o == 'C') demoChar();
    else std::cout << "\aUnknown option, aborting...";

    system("pause>nul");
    return 0;
}

void demoInt() {
    int n = 0;

    std::cout << "\aInsert a integer: ";
    std::cin >> n;

    Int integer = Int(n);

    std::cout << "\aStored value: " << integer.value;
}

void demoFloat() {
    float n = 0;

    std::cout << "\aInsert a float: ";
    std::cin >> n;

    Float floatz = Float(n);

    std::cout << "\aStored value: " << floatz.value;
}

void demoDouble() {
    double n = 0;

    std::cout << "\aInsert a double: ";
    std::cin >> n;

    Double doublez = Double(n);

    std::cout << "\aStored value: " << doublez.value;
}

void demoBool() {
    bool n = false;

    std::cout << "\aInsert a bool: ";
    std::cin >> n;

    Bool boolz = Bool(n);

    std::cout << "\aStored value: " << boolz.value;
}

void demoChar() {
    char n = 0;

    std::cout << "\aInsert a char: ";
    std::cin >> n;

    Char charz = Char(n);

    std::cout << "\aStored value: " << charz.value;
}