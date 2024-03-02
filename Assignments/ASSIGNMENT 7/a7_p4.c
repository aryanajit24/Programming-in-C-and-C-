#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//function to change the string to uppercase letters
char* uppercase(char* string){
    int x;
    for(x=0; string[x]; x++){
        string[x]=toupper(string[x]);
    }
    return string;
}
//function to change the string to lowercase letters
char* lowercase(char* string){
    int x;
    for(x=0; string[x]; x++){
        string[x]= tolower(string[x]);
    }
    return string;
}
//function to change the lowercase letters to
//uppercase letters and vice versa
char* both(char* string){
    int x;
    for (x=0;string[x];x++){
        if(islower (string[x]))
           string[x]=toupper(string[x]);
        else if(isupper(string[x]))
            string[x]=tolower(string[x]);
    }
    return string;
}
//function to end the program
char* quit(){
    exit(0);
}
//array to save the functions
char* (*Case[4])(char* iterations) = {uppercase, lowercase, both, quit};

int main(){
    //inputs
    char string[200],copy[200],array[200];
    int y;
    fgets(string,sizeof(string),stdin);
    strcpy(copy,string);
    /*endless while loop to let the use change the
    case of the letters in the string*/
    while(1){
        fgets(array,sizeof(array),stdin);
        sscanf(array, "%d", &y);
        strcpy(copy,string);
        printf("%s", (*Case[y-1])(copy));
    }
return 0;
}
