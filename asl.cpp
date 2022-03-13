#include <iostream>
#include <cstring>
#include "src/toCelsius.h"
#include "src/toFahrenheit.h"
#include "src/terminal-editor.h"
#include "src/geoCalc.hpp"

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
    else if (strcmp(argv[1], "terminal-editor")==0) {
        std::cout << "Please note this feature only works on macOS and Linux systems. It is also recommended that you run this while in the home directory." << std::endl;
        termEdit();
    }
    else if (strcmp(argv[1], "geo")==0) {
        GEO();
    }
    else {
        std::cout << argv[0] << argv[1];
    }
}
