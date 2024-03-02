/*
CH-230-A
a5 p6.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float arr[n];
    // Reading the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    int count = 0;
    float* ptr = arr; 
    while (*ptr >= 0.0) {
        count++;
        ptr++;
    }
    printf("Before the first negative value: %d elements\n", count);
    return 0;
}
