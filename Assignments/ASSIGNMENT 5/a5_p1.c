/*
CH-230-A
a5 p1.c
Aryan Panicker
apanicker@jacobs-university.de
*/

#include <stdio.h>
void printTriangle(int n, char ch) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char ch;
    // Reading input values
    scanf("%d", &n);
    scanf(" %c", &ch); 
    // Calling the function to print the triangle
    printTriangle(n, ch);

    return 0;
}
