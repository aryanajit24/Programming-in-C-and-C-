#include <stdio.h>
#include <stdlib.h>

//creating double linked list
struct DLinkedList
{
    char            	  info;
    struct DLinkedList   *prev;
    struct DLinkedList   *next;
};

struct DLinkedList* head;

//function to add character at the start of the list
struct DLinkedList *front(struct DLinkedList* list, char c) {
    struct DLinkedList *new_data;
    //dynamically allocating memory
    new_data = (struct DLinkedList*) malloc(sizeof(struct DLinkedList));
    if (new_data == NULL) {
        printf("Not enough memory!\n");
        return list;
    }
    //adding new character
    new_data->info = c;
    new_data->prev = NULL;
	//since it's at the beginning, previous pointer is empty
    new_data->next = list;
    //returning new added element
    return new_data;
}

//function to remove the characters from the list
struct DLinkedList *removeChar(struct DLinkedList *list, char info){
    struct DLinkedList *p;
	int count = 0;
	//checking for character
	for (p = list; p != NULL; p = p->next) {
		struct DLinkedList *c = p;
		if (p->info == info) {//cases of found character
			count = 1;
			if (p == list) {
				list = p->next;
			}
			if (p->next != NULL) {
				p->next->prev = p->prev;
			}
			if (p->prev != NULL) {
				p->prev->next = p->next;
			}
        //removing char
		free(c);
		}
	}
	if (count == 0) {
		//if the character is not in the list
		printf("The element is not in the list!\n");
	}
	//returning the modified list
	return list;
}

//function to print the list
void printList(struct DLinkedList* list) {
    struct DLinkedList* p;
    //looping through list to print every character
    for (p = list; p; p = p->next)
        printf("%c ", p->info);
    printf("\n");
}

//function to print the reverse of the list
void reversePrint(struct DLinkedList* list) {
    if (list == NULL)
        return;
    else if (list->next == NULL) {
        printf("%c ", list->info);
    }
    else {
        reversePrint(list->next);
        printf("%c ", list->info);
    }
    printf("\n");
}

//function to end the program
void disposeList(struct DLinkedList* list) {
    struct DLinkedList* element;
    while(list != NULL) {
        element = list->next;
        free(list);
        list = element;
    }
}

int main(){
    struct DLinkedList* list = NULL;
    int n;
	char c;
    head = NULL;
    //infinite loop to give the result the user wants
    while(1) {
        scanf("%d", &n);
        getchar();
        switch(n) {
            case 1:
                //adds a character in the start
                scanf("%c", &c);
                getchar();
                list = front(list, c);
                break;
            case 2:
                //removes the character from the list
                scanf("%c", &c);
                getchar();
                list = removeChar(list, c);
                break;
            case 3:
                //prints the list
                printList(list);
                break;
            case 4:
                //prints the reverse of the list
                reversePrint(list);
                break;
            case 5:
                //ends the program
                disposeList(list);
                exit(0);
        }
    }

    return 0;
}
