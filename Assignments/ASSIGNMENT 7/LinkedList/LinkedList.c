#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//function to remove the first element from the list
struct linkedlist* movefront(struct linkedlist* list, int num){
    struct linkedlist* element;
//dynamically allocating memory
    element=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    if(element==NULL){
        printf("Insufficient memory\n");
        return list;
    }
    //adding element to the list
    element -> z=num;
    element -> next=list;
//returning the remaining elements after the modifying
    return element;
};
//function to add an element at the end of the linked list
struct linkedlist* moveback(struct linkedlist* list, int num){
    struct linkedlist *element,*a;
    a=list;
//dynamically allocating memory
    element=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    if(element==NULL){
        printf("Insufficient memory\n");
        return list;
    }
//adding value in the list
    element -> z=num;
    element -> next=NULL;
    if(list==NULL){
        return element;
    }
//a while loop to run through the whole list to add value at the end
    while(a -> next != NULL){
        a =a -> next;
    }
    a -> next= element;
//returning the remaining elements after the modifying
    return list;
};
//function to remove the first element from the list
struct linkedlist* front(struct linkedlist* list){
    if (list==NULL){
        return list;
    }
    //removing the element
    struct linkedlist* b;
    b=list;
    list=list->next;
    free(b);
//returning the remaining elements after the modifying
    return list;
};
//function to print the list
void printlist(struct linkedlist* list){
    struct linkedlist* c;
    for(c=list; c; c=c->next){
        printf("%d ", c->z);
    }
    printf("\n");
}
//function to deallocate the linked list
void frees(struct linkedlist* list){
    struct linkedlist* d;
    while (list != NULL){
        d=list->next;
        free(list);
        list=d;
    }
}
