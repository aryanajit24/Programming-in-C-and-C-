#include <stdio.h>

int main(){
    int x , y;//assigning x and y and double variables
    scanf("%d",&x);//allowing the user to define the values of x and y
    scanf("%d",&y);

    int *ptr_one=&x;//assigning pointers one and two to the address of x
    int *ptr_two=&x;
    int *ptr_three=&y;//assigning pointer three to the address of y

    printf("Address of x=%p\n",ptr_one);
    printf("Address of x=%p\n",ptr_two);
    //the value printed for pointer one and two will be the same since the address of the variable is the same
    printf("Address of y=%p\n",ptr_three);
    //the value printed for pointer three will be different since its a different variable hence the address will be different

return 0;
}
