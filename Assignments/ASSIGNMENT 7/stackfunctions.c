#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
//STACK IMPLEMENTATION FUNCTIONS

//function to insert element in front
void push(Stack *stuff, int value) {
    stuff->arr[stuff->count++] = value;
}

//function to remove last element
int pop(Stack *stuff) {
    stuff->count--;
    return stuff->arr[stuff->count];
}

//function to empty stack
void empty(Stack *stuff) {
    int n = stuff->count;
	int i;
    for(i = 0; i < n; i++) {
        printf("%d ", pop(stuff));
    }
    printf("\n");
}

//function to check if stack is empty
int isEmpty(Stack *stuff) {
    if (stuff->count > 0) {
    	return 1;
	}
    else {
    	return 0;
	}
}
