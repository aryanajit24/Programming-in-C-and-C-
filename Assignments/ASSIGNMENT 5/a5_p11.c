/*
CH-230-A
a5 p11.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
// Recursive function to check if a number is prime
#include <stdio.h>

// Function to determine if a number is prime
int isPrime(int x) {
    if (x <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0; // x is divisible by i, so it's not prime
        }
    }
    return 1;
}

int main() {
    int x;
    scanf("%d", &x);

    if (isPrime(x)) {
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }

    return 0;
}

