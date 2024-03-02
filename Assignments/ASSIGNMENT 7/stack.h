
typedef struct stack {
    unsigned int count;
    int arr[12];
}Stack;

//functions:
void push(Stack *stuff, int value);//add element
int pop(Stack *stuff);//remove elemrnt
void empty(Stack *stuff);//emptystack
int isEmpty(Stack *stuff);//check if empty
