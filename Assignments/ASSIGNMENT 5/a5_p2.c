/*
CH-230-A
a5 p2.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
// Function to divide all elements of an array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] /= 5.0;
    }
}
int main() {
    // Declare an array with the given values
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Printing the elements of the array before division
    printf("Before:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    divby5(arr, size);
    printf("After:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}
