/*
CH-230-A
a5 p10.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

// Recursive function to print numbers from n down to 1
void printNumbersDown(int n) {
    if (n < 1) {
        return;
    }
    printf("%d ", n);
    printNumbersDown(n - 1); // Recursively call the function with n - 1
}
int main() {
    int n;
    //reading a +ve int
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Checking if n is +ve
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Numbers from %d down to 1: ", n);
    printNumbersDown(n);
    printf("\n");
    return 0;
}
