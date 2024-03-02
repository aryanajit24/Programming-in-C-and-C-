/*
CH-230-A
a3 p9.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

double sum25(double v[], int n) {
    if (n >= 6) {
        return v[2] + v[5];
    } else {
        printf("Positions 2 and 5 are not valid within the array.\n");
        return -111.0;
    }
}

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid input for n. Must be between 1 and 20.\n");
        return 1;  // exit with error code
    }

    double arr[20];
    printf("Enter %d double values:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double result = sum25(arr, n);

    if (result != -111.0) {
        printf("sum=%.6lf\n", result);
    }

    return 0;
}
