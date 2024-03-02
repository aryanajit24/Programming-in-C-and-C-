#include <stdio.h>
#include <stdlib.h>
    /*
    CH-230-A
    a6 p9.[c or cpp or h]
    Jaydev Dhanji
    jdhanji@jacobs-university.de
    */
    //Problem 9
//initializing a linked list
struct linkedlist{
    int z;
    struct linkedlist *next;
};
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
//function to insert an element at a certain position
struct linkedlist* position(struct linkedlist* list,int pos,int num){
    //creating 3 possibilities for the list
    struct linkedlist* one,*two,*three;
    struct linkedlist* element;

    one=list;
    two=list;
    //determining the size of the list
    int size=0;
    for (three=list; three; three= three-> next){
       size++;
    }
//if entered position is less than 0 or greater
//than the size of the list printing a consequent statement
    if (pos<0 || pos>size){
        printf("Invalid position!\n");
        return list;
    }

    if(pos == 0){
        list= movefront(list, num);
        return list;
    }
//dynamically allocating memory
    element=(struct linkedlist*)malloc(sizeof(struct linkedlist));
    if (element==NULL){
        printf("Insufficient Memory\n");
        return list;
    }
    element -> z=num;
    element ->next=NULL;
    int count=0;
    //loop for the pointer placement through the loop
    while(count!=pos){
        two=two->next;
        count ++;
    }
    //pointing at the next node
    element-> next= two;
    //loop to place the element at the position
    count=0;
    while(count!=pos-1){
        one=one->next;
        count++;
    }
    //placing the element in the specified position
    one->next=element;
//returning the list after an element added to a certain position
    return list;
};
//function to reverse the linked list
struct linkedlist* reverse(struct linkedlist* list){
    //creating 2 other lists for the reverse to be done
    struct linkedlist* before=NULL;
    struct linkedlist* current=list;
    struct linkedlist* next=NULL;

    while (current != NULL){
        //store the list in next
        next=current->next;
//reverse the current node's pointer
        current->next=before;
//move pointers one position ahead
        before =current;

        current=next;
    }
    current=before;
//returning the reversed linked list
    return current;
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

int main(){
    //inputs
    int num,pos;
    char e;
    struct linkedlist* list=NULL;

    while(1){
        //scanning the type of output the user wants
        scanf("%c", &e);
        switch(e){
        case 'a':
            scanf("%d", &num);
    //calling the function which add element in the end
            list= moveback(list,num);
            break;
        case 'b':
            scanf("%d", &num);
    //calling the function which adds element in the beginning
            list= movefront(list,num);
            break;
        case 'r':
    //calling the function which removes the first element
            list= front(list);
            break;
        case 'p':
    //calling the function which prints the list
            printlist(list);
            break;
        case 'q':
    //calling the function which ends the program
            frees(list);
            exit(0);
        case 'R':
    //calling the function which reverses the list
            list=reverse(list);
            break;
        case 'i':
            scanf("%d", &pos);
            scanf("%d", &num);
    //calling the function which adds an element to a certain position
            list= position(list,pos,num);
            break;
        }
        getchar();
    }
return 0;
}


