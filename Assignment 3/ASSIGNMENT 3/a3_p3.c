/*
CH-230-A
a3 p3.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

float convert(int cm) {
    // Converting factor: 1 km = 100,000 cm
    float km = cm / 100000.0;
    return km;
}

int main() {
    int cm;
    printf("Enter length in centimeters: ");
    scanf("%d", &cm);
    // Calling the convert function
    float km = convert(cm);
    printf("Result of conversion: %.6f km\n", km);

    return 0;
}
