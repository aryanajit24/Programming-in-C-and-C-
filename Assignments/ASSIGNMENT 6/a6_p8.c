#include <stdio.h>
#include <stdlib.h>
// Definition of a linked list structure
struct linkedlist {
    int z;
    struct linkedlist *next;
};
// Function to remove the first element from the list
struct linkedlist* movefront(struct linkedlist* list, int num) {
    struct linkedlist* element;
    // Dynamically allocating memory for a new element
    element = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    if (element == NULL) {
        printf("Insufficient memory\n");
        return list;
    }
    // Adding the element to the list
    element->z = num;
    element->next = list;
    // Returning the remaining elements after modification
    return element;
}
// Function to add an element at the end of the linked list
struct linkedlist* moveback(struct linkedlist* list, int num) {
    struct linkedlist *element, *a;
    a = list;
    // Dynamically allocating memory for a new element
    element = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    if (element == NULL) {
        printf("Insufficient memory\n");
        return list;
    }
    // Adding a value to the list
    element->z = num;
    element->next = NULL;
    if (list == NULL) {
        return element;
    }
    // Loop to traverse the list and add a value at the end
    while (a->next != NULL) {
        a = a->next;
    }
    a->next = element;
    // Returning the remaining elements after modification
    return list;
}
// Function to remove the first element from the list
struct linkedlist* front(struct linkedlist* list) {
    if (list == NULL) {
        return list;
    }
    // Removing the element
    struct linkedlist* b;
    b = list;
    list = list->next;
    free(b);
    // Returning the remaining elements after modification
    return list;
}
// Function to print the list
void printlist(struct linkedlist* list) {
    struct linkedlist* c;
    for (c = list; c; c = c->next) {
        printf("%d ", c->z);
    }
    printf("\n");
}
// Function to deallocate the linked list
void frees(struct linkedlist* list) {
    struct linkedlist* d;
    while (list != NULL) {
        d = list->next;
        free(list);
        list = d;
    }
}

int main() {
    // Input variables
    int num;
    char e;
    struct linkedlist* list = NULL;

    while (1) {
        // Scanning the type of operation the user wants
        scanf("%c", &e);
        switch (e) {
        case 'a':
            scanf("%d", &num);
            // Calling the function to add an element at the end
            list = moveback(list, num);
            break;
        case 'b':
            scanf("%d", &num);
            // Calling the function to add an element at the beginning
            list = movefront(list, num);
            break;
        case 'r':
            // Calling the function to remove the first element
            list = front(list);
            break;
        case 'p':
            // Calling the function to print the list
            printlist(list);
            break;
        case 'q':
            // Calling the function to end the program and deallocate the list
            frees(list);
            exit(0);
        }
        getchar();
    }
    return 0;
}
