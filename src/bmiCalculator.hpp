
#ifndef BMI_H
#define BMI_H
#include <iostream>

void BMI() {

    char units;
    double metricHeight, imperialHeightFt, imperialHeightIn, bmi, lbs, kgs;

    std::cout << "Imperial or metric [first char, lowercase]: ";
    std::cin >> units;
    
    switch (units) {
        case 'i':
        std::cout << "Enter your height in feet: ";
        std::cin >> imperialHeightFt;
        std::cout << "\nEnter your height in inches: ";
        std::cin >> imperialHeightIn;
        std::cout << "\nEnter your weight in lbs: ";
        std::cin >> lbs;

        imperialHeightIn += imperialHeightFt * 12;

        bmi = lbs / (imperialHeightIn * imperialHeightIn) * 703;
        std::cout << "\nYour BMI is: " << bmi;
        break;

        case 'm':
        std::cout << "\nWhat is your height in centimeters?: ";
        std::cin >> metricHeight;
        std::cout << "\nWhat is your weight in kilograms?: ";
        std::cin >> kgs;

        bmi = (kgs / metricHeight / metricHeight) * 10000;
        std::cout << "\nYour BMI is: " << bmi;
        break;
    }

    if(bmi < 24) {
        std::cout << "\nYou are underweight\n";
    } else if(bmi < 30 && bmi > 24) {
        std::cout << "\nYou are normal weight\n";
    } else if(bmi > 30 && bmi < 35) {
        std::cout << "\nYou are overweight\n";
    } else if(bmi > 35){
        std::cout << "\nYou are morbidly obese\n";
    } else {
        std::cout << "\nEnter a valid value\n";
    }
}
#endif
    
        
    
