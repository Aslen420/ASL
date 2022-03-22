#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdbool.h>
#include "src/tempConv.h"
#include "src/terminal-editor.h"
#include "src/geoCalc.hpp"
#include "src/bmiCalculator.hpp"
#include "src/timer.h"
#include "src/valConv.h"
#include "src/calc.hpp"
#include <unistd.h>



int main(int argc, char* argv[]) {
    bool EXAMPLE = true;
    while (EXAMPLE == true) {
    if (strcmp(argv[1], "help")==0 || strcmp(argv[1], "-h")==0)
    {
        std::cout << "fh - Celsius to Fahrenheit Converter" << std::endl;
        std::cout << "ch - Fahrenheit to Celsius Converter" << std::endl;
        std::cout << "terminal-editor - Terminal Prompt Editor" << std::endl;
        std::cout << "geo - Geometry Calculator" << std::endl;
        std::cout << "bmi - BMI Calculator" << std::endl;
        std::cout << "timer - Timer // only for Linux" << std::endl;
        std::cout << "val - Measurement Converter // Currently only metric" << std::endl;
        std::cout << "cal - Basic Calculator" << std::endl;
        std::cout << "chshell - Changes the default shell for the user // !fish, !bash, !zsh | useage : $ asl chshell !fish |                           You need to have the shell installed" << std::endl;
        EXAMPLE = false;
    }
    else if (strcmp(argv[1], "fh")==0)
    {
        toFahrenheit();
        EXAMPLE = false;
    }
    else if (strcmp(argv[1], "val")==0)
    {
        val();
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
     else if (strcmp(argv[1], "cal")==0) {
        CALC();
        EXAMPLE = false;
    }
     else if (strcmp(argv[1], "chshell")==0 && strcmp(argv[2], "zsh")==0) {
        system("sudo echo '$(which zsh)' >> /etc/shells")
        system("chsh -s (which zsh)");
        EXAMPLE = false;
    }
     else if (strcmp(argv[1], "chshell")==0 && strcmp(argv[2], "fish")==0) {
        system("sudo echo '$(which fish)' >> /etc/shells")
        system("chsh -s (which fish)");
        EXAMPLE = false;
    }
     else if (strcmp(argv[1], "chshell")==0 && strcmp(argv[2], "bash")==0) {
        system("sudo echo '$(which bash)' >> /etc/shells")
        system("chsh -s (which bash)");
        EXAMPLE = false;
    }
    else {
        std::cout << "Incorrect usage. Type asl -h for a list of commands." << std::endl;
        EXAMPLE = false;
    }
    }
}
