#ifndef CELSIUS_H
#define CELSIUS_H

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

#endif