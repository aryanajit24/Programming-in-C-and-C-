#include <stdio.h>
int main(){
    //inputs
    unsigned char c;
    int i,size;
    size=1;
    scanf("%c", &c);
    //loop to convert the decimal number to binary number
    for (i=0; (1<<size)<=c;size++);
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    //loop to reverse the binary numbers
    for(i=0; i<size; i++){
        (c&1 <<i) ? printf("1"):printf("0");
    }
    printf("\n");

return 0;
}
