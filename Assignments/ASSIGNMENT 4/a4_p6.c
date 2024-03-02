/*
CH-230-A
a4 p6.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for INT_MIN

#define MAX_SIZE 1000

int main() {
    // Inputs
    int *arr;
    int size, i;
    int max1, max2;

    // Reading the size of the array from the keyboard
    printf("Enter the size of the array:");
    scanf("%d", &size);

    // Check for valid size
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size\n");
        return 1;
    }

    // Memory allocation of the array
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Insufficient Memory");
        return 1;
    }

    // Reading elements into the array
    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;
    // Finding the greatest and second greatest values in the array
    for (i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }
    printf("Largest element:%d\n", max1);
    printf("Second Largest element:%d\n", max2);
    free(arr);
    return 0;
}
