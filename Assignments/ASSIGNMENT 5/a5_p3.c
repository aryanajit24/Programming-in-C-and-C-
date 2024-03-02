/*
CH-230-A
a5 p3.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

int count_lower(char* str) {
    int count = 0;
    // Iterate through the string using a pointer
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char input[51]; // Maximum string length is 50 + 1

    while (1) {
        // Read a string from the user
        printf("Enter a string (press Enter to stop): ");
        fgets(input, sizeof(input), stdin);
        if (input[0] == '\n') {
            break;
        }
        // Remove the newline character at the end of the string
        int i = 0;
        while (input[i] != '\0') {
            if (input[i] == '\n') {
                input[i] = '\0';
                break;
            }
            i++;
        }
        int lowercase_count = count_lower(input);
        printf("Number of lowercase characters: %d\n", lowercase_count);
    }

    return 0;
}
