/*
CH-230-A
a3 p6.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

float to_pounds(int kg, int g) {
    // Convert kilograms and grams to pounds
    float pounds = (kg * 2.2) + (g / 1000.0 * 2.2);
    return pounds;
}

int main() {
    int kg, g;
    printf("Enter weight in kilograms: ");
    scanf("%d", &kg);
    printf("Enter weight in grams: ");
    scanf("%d", &g);
    // Call the to_pounds function
    float pounds = to_pounds(kg, g);
    printf("Result of conversion: %.6f\n", pounds);

    return 0;
}
