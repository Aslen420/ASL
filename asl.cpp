#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdbool.h>

#include "src/toCelsius.h"
#include "src/toFahrenheit.h"
#include "src/terminal-editor.h"
#include "src/geoCalc.hpp"
#include "src/bmiCalculator.hpp"


int main(int argc, char* argv[]) {
    bool EXAMPLE = true;
    if (strcmp(argv[1], "help")==0)
    {
        std::cout << "fh - Celsius to Fahrenheit Converter" << std::endl;
        std::cout << "ch - Fahrenheit to Celsius Converter" << std::endl;
        std::cout << "terminal-editor - Terminal Prompt Editor" << std::endl;
        std::cout << "geo - Geometry Calculator" << std::endl;
        std::cout << "bmi - BMI Calculator" << std::endl;
        std::cout << "timer - Timer" << std::endl;
    }
    else if (strcmp(argv[1], "fh")==0)
    {
        toFahrenheit();
        EXAMPLE = false;
    }
    else if (strcmp(argv[1], "ch")==0) {
        toCelsius();
        EXAMPLE = false;
    }
    else if (strcmp(argv[1], "terminal-editor")==0) {
        std::cout << "Please note this feature only works on macOS and Linux systems. It is also recommended that you run this while in the home directory." << std::endl;
        termEdit();
        EXAMPLE = false;
    }
    else if (strcmp(argv[1], "geo")==0) {
        GEO();
        EXAMPLE = false;
    }
     else if (strcmp(argv[1], "bmi")==0) {
        BMI();
        EXAMPLE = false;
    }
     else if (strcmp(argv[1], "timer")==0) {
        timer();
        EXAMPLE = false;
    }
    else {
        std::cout << argv[0] << argv[1];
    }
    if (EXAMPLE == true) {
        std::cout << "Incorrect usage. Use asl help for a list of commands." << std::endl;
    }
}
