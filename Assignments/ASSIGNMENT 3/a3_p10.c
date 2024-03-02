/*
CH-230-A
a3 p10.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

// Function to return the product of two float values
float product(float a, float b) {
    return a * b;
}

// Function to return the product of two float values
void productbyref(float a, float b, float *p) {
    *p = a * b;
}

// Function to modify two float values by reference
void modifybyref(float *a, float *b) {
    *a += 3.0;
    *b += 11.0;
}

int main() {
    float num1, num2;
    float result1, result2;
    printf("Enter the first float value: ");
    scanf("%f", &num1);

    printf("Enter the second float value: ");
    scanf("%f", &num2);

    // Call the first function to calculate the product
    result1 = product(num1, num2);
    // Call the second function to calculate the product 
    productbyref(num1, num2, &result2);
    printf("Result from product function: %.2f\n", result1);
    printf("Result from productbyref function: %.2f\n", result2);
    // Call the third function to modify the values
    modifybyref(&num1, &num2);
    printf("Modified value of num1: %.2f\n", num1);
    printf("Modified value of num2: %.2f\n", num2);

    return 0;
}
