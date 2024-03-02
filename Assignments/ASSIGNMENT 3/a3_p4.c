/*
CH-230-A
a3 p4.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>

int position(char str[], char c) {
    int idx;
    for (idx = 0; str[idx] != '\0'; ++idx) {
        if (str[idx] == c) {
            return idx; // return the index when 'c' is found
        }
    }
    return -1; // return -1 if 'c' is not found in the string
}

int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        int pos = position(line, 'g');
        if (pos != -1) {
            printf("The first occurrence of 'g' is: %d\n", pos);
        } else {
            printf("'g' not found in the string.\n");
        }
    }
    return 0;
}
