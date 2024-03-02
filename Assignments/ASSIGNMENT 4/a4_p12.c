/*
CH-230-A
a4 p12.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 80
    void replaceAll(char * str, char c, char e){
    int i = 0;
    while(str[i] != '\0')
    {
        //searches for the character inputted by the user
        if(str[i] == c)
        {
        //replaces the character with the other character
            str[i] = e;
        }
        i++;
    }
}

int main(){
    char s[MAX_SIZE];
    char c, e, ch;
    printf("Enter a string : ");
    fgets(s,sizeof(s),stdin);
    while(strcmp(s,"stop") != 0)
    {
        //reading from the keyboard 
        printf("Enter a character to replace which is in your string: ");
        c = getchar();
        scanf("%c",&ch);
        printf("Enter the character to be replaced with %c : ",c);
        e = getchar();
        scanf("%c",&ch);
        replaceAll(s,c,e);
        printf("String formed after replacement is %s\n\n",s);
    }
    return 0;
}
