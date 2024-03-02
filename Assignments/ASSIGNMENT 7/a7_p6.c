#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//initializing a structure
struct person {
    char name[50];
    int age;
};
//function to store the list in different lists to make easy iterations
void swap(void* x, void* y, void* temp, int z){
    memcpy(temp, x, z);
    memcpy(x, y, z);
    memcpy(y, temp, z);
}
//bubblesort function to arrange the names and age accordingly
void bubblesort(void *arr, int length, int size, int (*func)(const void *, const void *)){
    if (length <1){
        return;
    }
    //dynamically allocating memory
    void* temp=(void*)malloc(size);
    int n=1;
    while(n){
        n=0;
        int i;
        for(i=1; i<length; i++){
            if (func(arr + (i-1)*size, arr + i*size) > 0) {
                swap(arr + (i-1)*size, arr + i*size, temp, size);
                n = 1;
            }
        }
    }
    //deallocating the memory
    free(temp);
}
//function to compare the names
int comparenames(const void* a, const void* b){
    const struct person *x=(const struct person *)a;
    const struct person *y=(const struct person *)b;
    int value= strcmp(x->name,y->name);
    if (value < 0){
        return -1;
    }
    else if (value==0){
        return 0;
    }
    else {
        return 1;
    }
}
//function to compare ages
int compareages(const void* a, const void* b){
    const struct person *x=(const struct person *)a;
    const struct person *y=(const struct person *)b;
    if (x->age == y->age){
        return strcmp(x->name,y->name);
    }
    else if(x->age < y->age){
        return -1;
    }
    else {
        return 1;
    }
}
//function to print the list
void Print(struct person* human, int length){
    int i;
    for (i=0;i<length;i++){
        printf("{%s, %d}", human[i].name, human[i].age);
    }
    printf("\n");
}

int main(){
    //inputs
    char array[200];
    int n,i;
    //reading the elements of the array
    fgets(array, sizeof(array), stdin);
    sscanf(array, "%d", &n);
    //dynamically allocating memory
    struct person* list=(struct person*)malloc(n*sizeof(struct person));
    if (list==NULL){
        printf("Insufficient memory");
        exit(1);
    }
    //reading the name and age of the person
    for(i=0;i<n;i++){
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strlen(list[i].name)-1]= '\0';
        fgets(array, sizeof(array),stdin);
        sscanf(array, "%d", &list[i].age);
    }
    //calling bubble sort function compare their names
    //in case they have the same initials using compare names function
    bubblesort(list,n,sizeof(list[0]), comparenames);
    //printing the results
    Print(list,n);
    //calling bubble sort function compare their names
    //in case they have the same initials using compare ages function
    bubblesort(list,n,sizeof(list[0]), compareages);
    //printing the result
    Print(list,n);

    //deallocating the memory
    free(list);

return 0;
}
