#include <stdio.h>
//this function is used to convert the decimal num to binary
void binary(unsigned n,char r){
    if (n>1){

        binary(n >> 1,r+1);
    }
    else
    {
        for (;r<8;r++) printf("0");
    }
    printf("%d", n & 1 );
}

int main(){
    unsigned char c;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    binary(c,1);
return 0;
}
