/*
CH-230-A
a4 p9.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n){

	int i, prod, s, l;
	s = l = arr[0];
	//a loop to get the smallest and largest value
	for(i = 1; i < n; i++){
        //largest value
		if(arr[i]>l){
			l=arr[i];
		}
		//smallest value
		if(arr[i]<s){
			s=arr[i];
		}
	}
	prod=s*l;
	return prod;
}

int main(){
    //inputs
	int *arr;
    int n, i;
    //reading from the keyboard
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Insufficient Memory\n");
        return 0;
    }
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    printf("Product of the smallest and largest elements:\n%d", prodminmax(arr, n));
    
    free(arr);

    return 0;
}
