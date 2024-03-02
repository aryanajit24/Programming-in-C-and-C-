/*
CH-230-A
a4 p11.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    int count_insensitive(char *str, char c)
    {
    //defining count as 0 since we want the character to be counted
    int count = 0;
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        //if the character i is equal to c count will be incremented by 1
        if(tolower(c) == tolower(str[i]))
            count++;
    }
    //return the value of count
    return count;
}

int main()
{
    // create a character array of size 50
    char *inputStr = (char*)malloc(50);
    printf("Enter a string: ");
    scanf("%[^\n]",inputStr);
    char *str = (char*)malloc(strlen(inputStr)+1);
    strcpy(str, inputStr); 
    free(inputStr);
    printf("\nThe character 'b' occurs %d times",count_insensitive(str, 'b'));
    printf("\nThe character 'H' occurs %d times",count_insensitive(str, 'H'));
    printf("\nThe character '8' occurs %d times",count_insensitive(str, '8'));
    printf("\nThe character 'u' occurs %d times",count_insensitive(str, 'u'));
    printf("\nThe character '$' occurs %d times",count_insensitive(str, '$'));

    return 0;
}

