/*
CH-230-A
a4 p4.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){
	int i =0;
	//inputs
	int vowel = 0;
	int consonants = 0;

    for(i=0; i < str[i] != '\0' ; i++){
        //if the character is either one of these the value of vowel there will be an incremented
        if(str[i] =='a' || str[i]=='e' || str[i]=='i' ||
			str[i]=='o' || str[i]=='u' || str[i]=='A' ||
			str[i]=='E' || str[i]=='I' || str[i]=='O' ||
			str[i]=='U'){
            vowel++;
        }
        //if the character is not a vowel the value of consonants will be added by 1
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonants++;
        }
    }
    //returning the value of consonants
    return consonants;
}
int main(int argc, char* argv[]){
    //inputs
    char string[100];
    int length = strlen(string);

    while (length>0){
    //reading from the keyboard
    fgets(string, sizeof(string), stdin);
    if(string[0]!= '\n'){
            printf("Number of consonants=%d\n", count_consonants(string));
            }
    if (string[0] == '\n' && string[1] == '\0'){
            break;
            }
        }

return 0;
}
