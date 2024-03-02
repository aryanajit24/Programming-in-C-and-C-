/*
CH-230-A
a4 p2.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main(){
    //inputs
    char string[50];
    //reading the string from the keyboard
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1]='\0';

    int idx;
    for (idx=0;idx<=50 && string[idx]!= '\0';idx++){
            //condition for every 2nd char is printed with spaces
            if(idx%2 == 0){
                printf("%c\n", string[idx]);
            }
            else{
                    printf(" %c\n", string[idx]);
            }
    }
return 0;
}
