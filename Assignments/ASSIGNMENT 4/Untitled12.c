#include <stdio.h>
#include <string.h>

//function for counting consonants
int count_consonants(char str[]){
    int i = 0;
    int vowel = 0;
    int consonants = 0;

    for(i=0; i<str[i]!='\0';i++){
        if (str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||
            str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||
            str[i]=='O' ||str[i]=='U'){
                vowel++;
            }
        else if ((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z'));{
            consonants++;
            }
    }
    return consonants;
//returning number of consonants
}

int main(int argc, char* argv[]){
	char word[100];
	int len = strlen(word);
	//program takes input util the string is not empty
    while (len > 0){
        fgets(word, sizeof(word), stdin);
        if (word[0] != '\n'){
            printf("Number of consonants=%d\n", count_consonants(word));
		}
        if (word[0] == '\n' && word[1] == '\0'){
        	break;//if the string is empty the program breaks
		}
    }

	return 0;
}

