#include <stdio.h>
#include <stdlib.h>

struct stack{
    char info;
    struct stack *prev, *next;
};

struct stack* start=NULL;

void insertatfront(){
    char data;
    scanf("%c", &data);
    struct stack* temp;
    temp= (struct stack*)malloc(sizeof(struct stack));
    temp -> info=data;
    temp -> prev=NULL;
    temp -> next= start;
    start=temp;
}

void removeallelements(){
    char data;
    scanf("%c", &data);
    int counter=0;
    struct stack* temp;
    temp =start;
    struct stack* next;
    while (temp != NULL){
        next=temp -> next;
        if (temp -> info == data){
            if(start==NULL || temp==NULL){
                continue;
            }
            if(start==temp){
                start= temp -> next;
            }
            if (temp->next != NULL){
                temp->next->prev=temp->prev;
            }
            if (temp->prev != NULL){
                temp->prev->next=temp->next;
            }
            free(temp);
            counter++;
        }
        temp=next;
    }
    if(counter==0){
        printf("The element is not in the list");
    }
}

void printstack(){
    if (start==NULL){
        return 0;
    }
    struct stack* temp;
    temp=start;
    while(temp != NULL){
        printf("%c ", temp->info);
        temp= temp->next;
    }
}

void revprintstack(){
    struct stack* tail;
    tail=start;
    while (tail->next!=NULL){
        tail=tail->next;
    }
    while (tail->prev!=NULL){
        printf(" %c ",tail->info);
        tail= tail->prev;
    }
    printf(" %c ", tail->info);
}

void deleteall(){
    struct stack* temp;
    while (start!= NULL){
        temp=start;
        start=start->next;
        free(temp);
    }
}

int main(){
    int x;
    do{
        scanf("%d", &x);
        switch(x){
            case 1:
                insertatfront();
                break;
            case 2:
                removeallelements();
                break;
            case 3:
                printstack();
                break;
            case 4:
                revprintstack();
                break;
            case 5:
                deleteall();
                break;
        }
    }
    while (x!=5);

return 0;
}
