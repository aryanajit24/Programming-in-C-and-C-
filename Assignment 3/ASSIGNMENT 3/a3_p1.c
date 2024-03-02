#include <stdio.h>

int main() {
    float x;
    int n;

    while (1) {
        printf("Enter a float (x): ");
        if (scanf("%f", &x) != 1) {
            // Invalid input, clear the buffer
            while (getchar() != '\n');
            printf("Input is invalid, reenter value\n");
            continue;
        }

        printf("Enter an integer (n): ");
        if (scanf("%d", &n) != 1 || n < 0) {
            // Invalid input, clear the buffer
            while (getchar() != '\n');
            printf("Input is invalid, reenter value\n");
            continue;
        }

        break;
    }

    for (int i = 0; i < n; ++i) {
        printf("%.6f\n", x);
    }

    return 0;
}
