#ifndef VAL_H
#define VAL_H

#include <stdio.h>
void val() {
    char selec;
    printf("Which of the following would you like to choose : \n\t A. mg > g\n\t B. g > kg\n\t C. kg > t\n\t D. g > mg\n\t E. kg > g\n\t F. t > kg\n   > ");
    scanf("%c", &selec);
    if (selec == 'A' || selec == 'a') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre / 1000;
        printf("%.3lf grams\n", pre);

    }
    if (selec == 'B' || selec == 'b') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre / 1000;
        printf("%.3lf kilograms\n", pre);

    }
    if (selec == 'C' || selec == 'c') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre / 1000;
        printf("%.3lf metric tons\n", pre);

    }
    if (selec == 'D' || selec == 'd') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre * 1000;
        printf("%.1lf milligrams\n", pre);

    }
    if (selec == 'E' || selec == 'e') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre * 1000;
        printf("%.1lf grams\n", pre);

    }
    if (selec == 'F' || selec == 'f') {
        printf("Enter a value to convert > ");
        double pre;
        scanf("%lf", &pre);
        pre = pre * 1000;
        printf("%.1lf kilograms\n", pre);

    }
}

#endif
