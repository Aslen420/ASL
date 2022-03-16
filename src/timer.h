#ifndef TIMER_H
#define TIMER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void timer() {
    char timer[100];
    char msg[100];
    printf("Enter an amount of seconds for a timer : ");
    scanf("%s", &timer);
    strcpy(msg, "sleep ");
    strcat(msg, timer);
    system(msg);
    system("notify-send \"Your timer just went off!\"");
}

#endif
