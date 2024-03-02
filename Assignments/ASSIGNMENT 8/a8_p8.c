#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //inputs
    char filename[200];
    char c;
    int count=0;

    //scanning the file name from the keyboard
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename)-1]='\0';

    //opening the file
    FILE *f1;
    f1=fopen(filename, "r");
    if(f1==NULL){
        printf("NO such file exists");
        exit(1);
    }

    //counting words
    while((c=getc(f1))!=EOF){
        //excluding the following characters
        if (c==' '||c==','||c=='?'||c=='!'
        ||c=='.'||c=='\t'||c=='\n'||c=='\r'){
            count++;
            c= getc(f1);
            while (c==' '||c==','||c=='?'||c=='!'
        ||c=='.'||c=='\t'||c=='\n'||c=='\r'){
                 c=getc(f1);
            }
        }

    }

    //printing the amount of words
    printf("%d\n", count);
    //closing the file
    fclose(f1);

return 0;
}
