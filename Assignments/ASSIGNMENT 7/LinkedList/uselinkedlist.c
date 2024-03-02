#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    //inputs
    int num;
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
        }
        getchar();
    }
return 0;
}

