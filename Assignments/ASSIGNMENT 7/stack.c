#include "stack.h" //including header file
#include <stdio.h>
#include <stdlib.h>

int main() {
    //inputs
    Stack stuff;
    stuff.count = 0;
    char arr[150], c;
    static int value, n;

    while(1) {
        fgets(arr, sizeof(arr), stdin);
        sscanf(arr, "%c", &c);
        switch(c) {
            case 's':
                //function to insert an element in the start of the list
                fgets(arr, sizeof(arr), stdin);
                sscanf(arr, "%d", &value);
                //if more than the size of the elements are entered the
                //program prints the following
                if (stuff.count >= 12) {
                    printf("Pushing Stack Overflow\n");
                    break;
                }
                printf("Pushing %d\n", value);
                push(&stuff, value);
                break;
            case 'p':
                //function to remove last element
                printf("Popping ");
                if (stuff.count == 0) {
                    printf("Stack Underflow\n");
                    break;
                }
                n = pop(&stuff);
                printf("%d\n", n);
                break;
            case 'e':
                //clear the stack
                printf("Emptying Stack ");
                empty(&stuff);
                break;
            case 'q':
                //to end the function
                printf("Quit\n");
                exit(0);
        }
    }

    return 0;
}
