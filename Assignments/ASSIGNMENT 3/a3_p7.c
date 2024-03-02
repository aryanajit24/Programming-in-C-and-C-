/*
CH-230-A
a3 p7.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

void print_form(int n, int m, char c) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m + i - 1; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main() {
    int n, m;
    char c;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter a character c: ");
    scanf(" %c", &c);
    // Call the print_form function 
    print_form(n, m, c);

    return 0;
}