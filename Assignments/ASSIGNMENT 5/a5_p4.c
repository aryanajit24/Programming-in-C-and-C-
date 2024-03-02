/*
CH-230-A
a5 p4.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h> 

void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] /= 5.0;
    }
}

int main() {
    int n;
    // Reading the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float* arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    // Call the divby5 function to divide the elements by 5
    divby5(arr, n);
    printf("After division by 5.0:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
