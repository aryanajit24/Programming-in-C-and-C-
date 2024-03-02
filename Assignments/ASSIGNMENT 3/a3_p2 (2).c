/*
CH-230-A
a3 p2.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

int main() {
    char ch;
    int n;
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch); //space before %c
    printf("Enter an integer n: ");
    scanf("%d", &n);
    // Loop from 'ch' to 'ch-n'
    for (int i = 0; i <= n; i++) {
        printf("%c ", ch - i);
    }

    printf("\n");

    return 0;
}
