#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    //inputs
   char ch1,ch2;
   int sum=0;
   //opening the file
   FILE *f1;
   f1=fopen("chars.txt", "r");
   //checking if the file isnt empty or does exist
   if (f1==NULL){
    printf("Input File does not exist");
    exit(0);
   }
   //scanning the first 2 characters in the file
   fscanf(f1, "%c", &ch1);
   fscanf(f1, "%c", &ch2);
   printf("Character: %c %c found", ch1, ch2);

   //adding the 2 characters
   sum=sum+(int)ch1+(int)ch2;
   //closing the first file
   fclose(f1);

   //opening the output file
   FILE *f2;
   f2=fopen("codesum.txt", "w");
   //printing the sum  in the file
   fprintf(f2, "%d", sum);
   printf("\nData written to codesum.txt");
   //closing the file
   fclose(f2);
return 0;
}
