#include <iostream>
#include <cstring>
#include "src/toCelsius.hpp"
#include "src/toFahrenheit.hpp"

int main(int argc, char* argv[]) {
    if (strcmp(argv[1], "help")==0)
    {
        std::cout << "fh - Celsius to Fahrenheit Converter" << std::endl;
        std::cout << "ch - Fahrenheit to Celsius Converter" << std::endl;
    }
    else if (strcmp(argv[1], "fh")==0)
    {
        toFahrenheit();
    }
    else if (strcmp(argv[1], "ch")==0) {
        toCelsius();
    }
    else {
        std::cout << argv[0] << argv[1];
    }
}
