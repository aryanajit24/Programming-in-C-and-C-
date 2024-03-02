/*
CH-230-A
a3 p5.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

int main() {
    char c;
    int n;
    double temperatures[100];
    printf("Enter 's' to calculate the sum, 'p' to list temperatures, 't' for Fahrenheit, or any other character for the average: ");
    scanf(" %c", &c);
    printf("Enter the number of temperatures (n): ");
    scanf("%d", &n);
    // Input 'n' double values 
    printf("Enter %d temperature(s) in Celsius:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &temperatures[i]);
    }

    switch (c) {
        case 's': {
            double sum = 0.0;
            for (int i = 0; i < n; i++) {
                sum += temperatures[i];
            }
            printf("Sum of temperatures: %.2lf\n", sum);
            break;
        }
        case 'p':
            printf("List of temperatures in Celsius:\n");
            for (int i = 0; i < n; i++) {
                printf("%.2lf ", temperatures[i]);
            }
            printf("\n");
            break;
        case 't':
            printf("List of temperatures in Fahrenheit:\n");
            for (int i = 0; i < n; i++) {
                double fahrenheit = (temperatures[i] * 9 / 5) + 32;
                printf("%.2lf ", fahrenheit);
            }
            printf("\n");
            break;
        default: {
            double sum = 0.0;
            for (int i = 0; i < n; i++) {
                sum += temperatures[i];
            }
            double average = sum / n;
            printf("Average temperature: %.2lf\n", average);
            break;
        }
    }

    return 0;
}
