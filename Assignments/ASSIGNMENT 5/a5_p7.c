/*
CH-230-A
a5 p7.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[101]; // Maximum length of each input string is 100 characters
    char str2[101];
    // Readign the two strings from standard input
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2;
    // Dynamically allocating memory for the concatenated string
    char* result = (char*)malloc((totalLen + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(result, str1);
    strcat(result, str2);
    printf("Result of concatenation: %s\n", result);
    free(result);
    return 0;
}
