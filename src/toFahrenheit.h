#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

#include <stdio.h>

void toFahrenheit() {
	printf("Enter a number to convert to fahrenheit : ");
	double num1;
	scanf("%lf", &num1);
	num1 = (num1 * 1.8) + 32;
	printf("%.2lf\n", num1);
}

#endif
