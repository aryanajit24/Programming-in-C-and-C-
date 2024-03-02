#include <stdio.h>
#include <stdlib.h>
//function to write the array in ascending order
int ascending(const void* x1, const void* x2){
    return *(int*)x1 -*(int*)x2;
}
//function to write the array in descending order
int descending(const void* x1, const void* x2){
    return *(int*)x2-*(int*)x1;
}
//function to print the array
void print(int array[], int x){
    int i;
    for (i=0; i<x; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    //inputs
    int x,i;
    char string[100];
    int *array;
    char c;
    //reads the size of array from the keyboard
    fgets(string, sizeof(string), stdin);
    sscanf(string, "%d", &x);
    //dynamically allocating memory
    array=(int*)malloc(sizeof(int)*x);
    if(array==NULL){
        printf("Insufficient memory");
        exit(1);
    }
    //reads the elements of the array
    for (i=0; i<x; i++){
        fgets(string, sizeof(string), stdin);
        sscanf(string, "%d", &array[i]);
    }
    //loop to run the functions endless times
    while(1){
        //reading what kind of result the user wants
        fgets(string, sizeof(string), stdin);
        sscanf(string, "%c", &c);
        switch(c){
        case 'a':
            //using quick sort function and calling the function
            qsort(array,x,sizeof(array[0]), ascending);
            break;
        case 'd':
            //using quick sort function and calling the function
            qsort(array, x, sizeof(array[0]), descending);
            break;
        case 'e':
            //ending the program when user inputs 'e'
            exit(0);
            free(array);
            break;
        }
        //printing the result after the function is called
        print(array, x);
    }
    //deallocating the memory
    free(array);
return 0;
}
