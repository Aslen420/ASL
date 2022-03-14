
#ifndef BMI_H
#define BMI_H
#include <iostream>

void bmi() {

    char units;
    double metricHeight, imperialHeight, bmi, lbs, kgs;

    std::cout << "Imperial or metric [first char, lowercase]: ";
    std::cin >> units;
    
    switch (units) {
        case 'i':
        std::cout << "\nEnter your height in inches: ";
        std::cin >> imperialHeight;
        std::cout << "\nEnter your weight in lbs: ";
        std::cin >> lbs;

        bmi = lbs / (imperialHeight * imperialHeight) * 703;
        std::cout << "Your BMI is: " << bmi;
        break;

        case 'm':
        std::cout << "\n\nWhat is your height in centimeters?: ";
        std::cin >> metricHeight;
        std::cout << "\n\nWhat is your weight in kilograms?: ";
        std::cin >> kgs;

        bmi = (kgs / metricHeight / metricHeight) * 10000;
        std::cout << "\n\nYour BMI is: " << bmi << "\n\n";
        break;
    }

    if(bmi < 24) {
        std::cout << "\n\nYou are underweight\n\n";
    } else if(bmi < 30 && bmi > 24) {
        std::cout << "\n\nYou are normal weight\n\n";
    } else if(bmi > 30 && bmi < 35) {
        std::cout << "\n\nYou are overweight\n\n";
    } else if(bmi > 35){
        std::cout << "\n\nYou are morbidly obese\n\n";
    } else {
        std::cout << "\n\nEnter a valid value\n\n";
    }
}

#endif
    
        
    
