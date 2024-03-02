/*
CH-230-A
a4 p5.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) {
    // Using a pointer
    char *p;
    p = str;
    int count = 0;

    for (; *p != '\0'; p++) {
        // If the pointer reads a vowel, it will not be counted
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') {
            continue;
        } else {
            count++;
        }
    }
    // Returning the value of count
    return count;
}

int main(int argc, char *argv[]) {
    char string[100];

    while (1) {
        // Reading the string from the keyboard
        fgets(string, sizeof(string), stdin);

        if (string[0] == '\n' && string[1] == '\0') {
            // If the string is empty, break out of the loop
            break;
        }

        // Calculate the length of the string after reading
        int len = strlen(string);

        if (string[0] != '\n') {
            printf("Number of consonants = %d\n", count_consonants(string));
        }
    }

    return 0;
}
