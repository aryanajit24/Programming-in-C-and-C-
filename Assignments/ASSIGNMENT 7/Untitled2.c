
#include <stdio.h>
#include <stdlib.h>

struct node {
    char info;
    struct node *prev, *next;
};
struct node* start = NULL;

void insertAtFront()
{
    char data;
    scanf("%c", &data);
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->prev = NULL;
    temp->next = start;
    start = temp;
}

void deleteElements()
{
    char data;
    scanf("%c", &data);
    int counter=0;
    struct node* temp;
    temp = start;
    struct node* next;
    while (temp != NULL) {
      next = temp->next;
      if (temp->info == data) {
           if (start == NULL || temp == NULL) {
                continue;
           }
           if (start == temp) {
              start = temp->next;
           }
           if (temp->next != NULL) {
              temp->next->prev = temp->prev;
           }
           if (temp->prev != NULL) {
              temp->prev->next = temp->next;
           }
           free(temp);
           counter++;
    }
          temp = next;
   }
   if(counter==0)printf("The element is not in the List!");
}

void traverse()
{
    if (start == NULL) {
        return;
    }
    struct node* temp;
    temp = start;
    while (temp != NULL) {
        printf("%c ", temp->info);
        temp = temp->next;
    }
}

void reversePrint()
{
    struct node* tail;
    tail = start;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    while(tail->prev != NULL) {
        printf("%c ", tail->info);
        tail = tail->prev;
    }
    printf("%c ", tail->info);
}

void deleteAllNodes() {
  struct node* temp;
  while(start != NULL) {
    temp = start;
    start = start->next;
    free(temp);
  }
}

int main() {
    int d;
    do {
        scanf("%d", &d);
        switch(d){
            case 1:
                insertAtFront();
                break;
            case 2:
                deleteElements();
                break;
            case 3:
                traverse();
                printf("n");
                break;
            case 4:
                reversePrint();
                printf("n");
                break;
            case 5:
                deleteAllNodes();
                break;
        }
    } while(d!=5);

    return 0;
}
