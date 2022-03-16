#ifndef CALC_H
#define CALC_H

#include <iostream>
#include <math.h>

void CALC() {

    // vars
    int oprt, exp, inpexp;
    double inp, inp2, out;

    // Asks user for the operation to execute
    std::cout << "What operation would you like to do? [add/sub/mult/div/exp] [1-5 respectively]: " << std::endl;
    std::cin >> oprt;

    switch(oprt) {
        case 1: // Asks for inputs and finds addition output
        std::cout << "Enter input 1 value: " << std::endl;
        std::cin >> inp;
        std::cout << "Enter input 2 value: " << std::endl;
        std::cin >> inp2;
        out = inp + inp2;
        std::cout << "Output: " << out << std::endl;

        break;
        case 2: // Asks for inputs and finds subtraction output
        std::cout << "Enter input 1 value: " << std::endl;
        std::cin >> inp;
        std::cout << "Enter input 2 value: " << std::endl;
        std::cin >> inp2;
        out = inp - inp2;
        std::cout << "Output: " << out << std::endl;

        break;
        case 3: // Asks for inputs and finds mult output
        std::cout << "Enter input 1 value: " << std::endl;
        std::cin >> inp;
        std::cout << "Enter input 2 value: " << std::endl;
        std::cin >> inp2;
        out = inp * inp2;
        std::cout << "Output: " << out << std::endl;

        break;
        case 4: // Asks for inputs and finds div output
        std::cout << "Enter input 1 value: " << std::endl;
        std::cin >> inp;
        std::cout << "Enter input 2 value: " << std::endl;
        std::cin >> inp2;
        out = inp / inp2;
        std::cout << "Output: " << out << std::endl;

        break;
        case 5: // Asks for inputs and finds power output
        std::cout << "Enter base number: " << std::endl;
        std::cin >> inp;
        std::cout << "Enter the exponent: " << std::endl;
        std::cin >> exp;
        out = pow(inpexp, exp);
        std::cout << "Output: " << out << std::endl;

        break;
    } 
}
#endif
