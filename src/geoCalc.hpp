#ifndef GEO_H
#define GEO_H

#include <iostream>
#include <cstdio>
#include <math.h>
#include <string.h>

void GEO() {
    char shape;
    double height, width, base1, base2, radius; // Inputs to calculate on
    double triOutput, circOutputArea, circOutputCircum, trapOutput, rectOutput; // Outputs to be printed
    const double PI = 3.14;  // Defines PI as a const 

    std::cout << "What shape would you like to use? [Triangle/Circle/Rectangle] [Enter first char]: ";
    std::cin >> shape;

    // Switch statements to calculate outs
    switch(shape){
        case 't':

        std::cout << "Enter the height of the triangle: ";
        std::cin >> height;
        std::cout << "Enter the width of the triangle: ";
        std::cin >> width;
        triOutput = .5 * (height * width);
        std::cout << "Output for triangle area: " << triOutput << "\n\n\n";
        system("pause");
        break;

        case 'c':
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        circOutputArea = radius * radius * PI;
        circOutputCircum = 2 * PI * radius;
        std::cout << "Output for circle area: " << circOutputArea << "\n";
        std::cout << "Output for circle circumference: " << circOutputCircum << "\n\n\n";
        system("pause");
        break;

        case 'r':
        std::cout << "Enter the rectangle width: ";
        std::cin >> width;
        std::cout << "Enter the rectangle height: ";
        std::cin >> height;
        rectOutput = height * width;
        std::cout << "Rectangle area output: " << rectOutput << "\n\n\n";
        system("pause");
        break;


    }
}
#endif
