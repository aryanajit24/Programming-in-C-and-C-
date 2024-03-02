/*
CH-230-A
a4 p7.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
void print_matrix(int n, int matrix[n][n]){
    //int r for the rows and c for the columns
	int r, c;
	printf("The entered matrix is:\n");
	//for loop for the rows
	for(r=0; r<n; r++){
        //for loop for the columns
		for(c=0; c<n; c++){
			printf("%d ", matrix[r][c]);
		}
		printf("\n");
	}
}
void main_diagonal(int n, int matrix[n][n]){
    //int r for the rows and c for the columns
    int r, c;
	printf("Under the main diagonal:\n");
	//a loop to find numbers
	for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			if(r>c){
				printf("%d ", matrix[r][c]);
			}
		}
	}
}

int main(){
	int n, r, c;
	scanf("%d", &n);
	int matrix[n][n];
	for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			scanf("%d", &matrix[r][c]);
		}
	}
	print_matrix(n, matrix);
	main_diagonal(n, matrix);

	printf("\n");
	return 0;
}
