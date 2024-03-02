#include <stdio.h>
#include <stdlib.h>

//initializing a linked list structure
struct LinkedList {
    int info;
    struct LinkedList *next;
};
//adding the value at the end of the linked list
struct LinkedList* push_back(struct LinkedList* list, int num) {
    struct LinkedList *element, *p;
    p = list;
   //dynamically allocating memory
	element = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(element == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
	//adding value in the list
    element->info = num;
    element->next = NULL;

    if(list == NULL)
        return element;
	//looping though list to add the element in the back
    while(p->next != NULL){
        p = p->next;
	}
	p->next = element;

    return list;
}

//add the value to the beginning of our linked list
struct LinkedList* push_front(struct LinkedList* list, int num) {
    struct LinkedList* element;
    //dynamically allocating memory
	element = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(element == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
	//adding element to the list
    element->info = num;
    element->next = list;

    return element;
}

//remove a first element from the linked list
struct LinkedList* pop_front(struct LinkedList* list) {
    if (list == NULL){
        return list;
	}
	//removing the front element
    struct LinkedList* popped;
    popped = list;
    list = list->next;
    free(popped);

    return list;
}
//function to print the linked list
void printS(struct LinkedList* list) {
    struct LinkedList* p;
    for (p = list; p; p = p->next) {
        printf("%d ", p->info); //printing each element
    }
    printf("\n");
}
//function to free linked list
void freeS(struct LinkedList* list) {
    struct LinkedList* freed;
    while(list != NULL) {
        freed = list->next;
        free(list);//freeing each element of the list
        list = freed;//the list is then empty
    }
}
//function for inserting an element at a position
struct LinkedList* insertPos(struct LinkedList* list, int pos, int num) {
    struct LinkedList* one, *two, *three; //creating three instances of the list
	struct LinkedList* element;
    one = list;
    two = list;
    int size = 0; //determining the size of the list
    for(three = list; three; three = three->next) {
        size++;
    }
    //checking for invalid position
    if (pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return list;
    }
    if (pos == 0) {
        list = push_front(list, num);
        return list;
    }
	//dynamically allocating memory
    element = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if (element == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
    element->info = num;
    element->next = NULL;
    int count = 0;
    //looping through the list for the pointer placement
	while(count != pos) {
        two = two->next;
        count++;
    }
    element->next = two; //pointing at the next node
    //looping through the list to place element at position
    count = 0;
    while(count != pos - 1) {
        one = one->next;
        count++;
    }
    one->next = element; //placing the element at the specified position

    return list;
}
//function to reverse the linked list
struct LinkedList* reverse(struct LinkedList* list) {
    struct LinkedList* prev = NULL;
    struct LinkedList* current = list;
    struct LinkedList* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    current = prev;

    return current;
}

int main() {
    int num, pos;
    char c;
    struct LinkedList* list = NULL;
//looping for number and character input
    while(1) {
        scanf("%c", &c);
        switch (c){ //switch cases for the command to be taken
            case 'a': //calling functions in each case
                scanf("%d", &num);
                list = push_back(list, num);
                break;
            case 'b':
                scanf("%d", &num);
                list = push_front(list, num);
                break;
            case 'r':
                list = pop_front(list);
                break;
            case 'p':
                printS(list);
                break;
            case 'q':
                freeS(list);
                exit(0);
            case 'i':
                scanf("%d", &pos);
                scanf("%d", &num);
                list = insertPos(list, pos, num);
                break;
            case 'R':
                list = reverse(list);
                break;
        }
        getchar();
    }

    return 0;
}
