#include <stdio.h>
    int main(){
    int a;//assigning an integer
    scanf("%d",&a);
    //letting the user decide the input value which will be displayed as the output
    int *ptr;
    ptr= &a;//assigning the pointer an address of the integer "a"
    printf("%d\n",a);
    printf("%p\n",ptr);
    printf("%d\n",*ptr+5);// adding 5 to the assigned value of "a" by the user
    printf("%p\n",&a);//proving that the address of "a" does not change given its value

return 0;
}
