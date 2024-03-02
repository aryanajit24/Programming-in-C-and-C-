/*
CH-230-A
a3 p11.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main() {
    char one[1000], two[1000], three[1000], c;

    // give input of two strings with spaces
    printf("Enter the first string: ");
    fgets(one, sizeof(one), stdin);
    printf("Enter the second string: ");
    fgets(two, sizeof(two), stdin);
    // Remove newline char
    one[strcspn(one, "\n")] = '\0';
    two[strcspn(two, "\n")] = '\0';
    int length1 = strlen(one);
    int length2 = strlen(two);
    printf("length1=%d\nlength2=%d\n", length1, length2);
    // concate the two strings
    strcat(one, two);
    printf("concatenation=%s\n", one);
    strcpy(three, two);
    printf("copy=%s\n", three);
    // Compare the two strings
    int cmp = strcmp(one, two);
    if (cmp < 0) {
        printf("one is smaller than two\n");
    } else if (cmp > 0) {
        printf("two is smaller than one\n");
    } else {
        printf("one and two are equal\n");
    }
    printf("Enter a character: ");
    scanf(" %c", &c);
    char *pos = strchr(two, c);
    if (pos != NULL) {
        int position = pos - two;
        printf("position=%d\n", position);
    } else {
        printf("Character not found in the second string\n");
    }

    return 0;
}
