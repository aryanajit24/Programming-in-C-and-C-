#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //inputs
    double d1,d2;
    char filename[100], filename2[100];
    //scanning the file name from the keyboard
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename)-1]='\0';
    fgets(filename2, sizeof(filename2), stdin);
    filename2[strlen(filename2)-1]='\0';

    //opening the files
    FILE *f1;
    f1= fopen(filename, "r");
    FILE *f2;
    f2= fopen(filename2, "r");
    FILE *f3;
    f3= fopen("results.txt", "w");
    //to check if the files aren't empty and if
    //they are a corresponding message should be printed
    if(f1==NULL||f2==NULL||f3==NULL){
        printf("Files are empty");
        exit(1);
    }
    //scanning the contents of the files
    fscanf(f1, "%lf", &d1);
    fscanf(f2, "%lf", &d2);
    printf("The files are opened and read.\n");

    //calculating
    double sum, product, subtraction, division;
    sum=d1+d1;
    product=d1*d2;
    subtraction=d1-d2;
    division=d1/d2;

    printf("The arithmetic operations are done and saved in the file result.txt\n");
    //printing results in the output file
    fprintf(f3, "Sum of 2 doubles: %lf\n", sum);
    fprintf(f3, "Difference of 2 doubles: %lf\n", subtraction);
    fprintf(f3, "Product of 2 doubles: %lf\n", product);
    fprintf(f3, "Division of 2 doubles: %lf\n", division);

    //closing the files
    fclose(f1);
    fclose(f2);
    fclose(f3);
return 0;
}
