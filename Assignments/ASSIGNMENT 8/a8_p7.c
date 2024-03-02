#include <stdio.h>
#include <stdlib.h>

int main(){
    //opening the files
    FILE *f1;
    f1=fopen("text1.txt", "r");
    FILE *f2;
    f2=fopen("text2.txt", "r");
    FILE *f3;
    f3=fopen("merge12.txt", "w");
    char ch;
    //checking if the files arent empty or if they exist
    if(f1==NULL || f2== NULL || f3==NULL ){
        printf("FILES ARE EMPTY");
        exit(0);
    }

    //merging the files
    //putting file 2 in f3 until end of file
    while((ch= fgetc(f2))!= EOF){
        fputc(ch,f3);
    }
    //putting file 1 in f3 until the end
    while((ch=fgetc(f1))!= EOF){
        fputc(ch,f3);
    }

    printf("MERGING COMPLETE");

    //closing all the files
    fclose(f1);
    fclose(f2);
    fclose(f3);

return 0;
}

