#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "src/toCelsius.hpp"
#include "src/toFahrenheit.hpp"
#include "src/terminal-editor.hpp"
#include "src/geoCalc.hpp"

int main(int argc, char* argv[]) {
    if (strcmp(argv[1], "help")==0)
    {
        std::cout << "fh - Celsius to Fahrenheit Converter" << std::endl;
        std::cout << "ch - Fahrenheit to Celsius Converter" << std::endl;
        std::cout << "terminal-editor - Terminal Prompt Editor" << std::endl;
        std::cout << "geo - Geometry Calculator" << std::endl;
        std::cout << "cow - Crash Ur Computer" << std::endl;
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
    else if (strcmp(argv[1], NULL)==0) {
        std::cout << "Unknown usage; type asl help for a list of all commands." << std::endl;
    }
    else if (strcmp(argv[1], " ")==0) {
        std::cout << "Unknown usage; type asl help for a list of all commands." << std::endl;
    }
    else {
        std::cout << argv[0] << argv[1];
    }
}
