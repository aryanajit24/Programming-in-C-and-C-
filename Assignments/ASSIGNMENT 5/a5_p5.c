/*
CH-230-A
a5 p5.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

// Function to divide each element in the array by 5
void divby5(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] /= 5.0;
    }
}

// Function to compute the scalar product of two vectors
double scalarProduct(double v[], double w[], int n) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += v[i] * w[i];
    }
    return result;
}

void findSmallestAndLargest(double vector[], int n) {
    double smallest = vector[0];
    double largest = vector[0];
    int smallestPos = 0;
    int largestPos = 0;

    for (int i = 1; i < n; i++) {
        if (vector[i] < smallest) {
            smallest = vector[i];
            smallestPos = i;
        }
        if (vector[i] > largest) {
            largest = vector[i];
            largestPos = i;
        }
    }
    printf("The smallest = %.6lf\n", smallest);
    printf("Position of smallest = %d\n", smallestPos);
    printf("The largest = %.6lf\n", largest);
    printf("Position of largest = %d\n", largestPos);
}

int main() {
    int n;
    scanf("%d", &n);
    double v[n], w[n]; // Use double instead of float

    printf("For vector v:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]); // Use %lf to read double values
    }

    printf("For vector w:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]); // Use %lf to read double values
    }

    divby5(v, n);
    divby5(w, n);

    printf("After division by 5.0:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3lf ", v[i]); // Use %lf to print double values
    }
    printf("\n");

    printf("After division by 5.0:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3lf ", w[i]); // Use %lf to print double values
    }
    printf("\n");

    return 0;
}


