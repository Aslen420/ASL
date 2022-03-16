#ifndef TEMP_H
#define TEMP_H

#include <stdio.h>

void toCelsius() {
	printf("Enter a number to convert to celsius : ");
	double num1;
	scanf("%lf", &num1);
	num1 = num1 - 32;
	num1 = num1 * 5;
	num1 = num1 / 9;
	printf("%.2lf\n", num1);
}
void toFahrenheit() {
	printf("Enter a number to convert to fahrenheit : ");
	double num1;
	scanf("%lf", &num1);
	num1 = (num1 * 1.8) + 32;
	printf("%.2lf\n", num1);
}


#endif
