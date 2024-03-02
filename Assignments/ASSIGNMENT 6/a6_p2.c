#include <stdio.h>

#define LEASTSIGNIFICANT(x) (x & 1)

int main() {
    unsigned char a;
    scanf("%c", &a);

    printf("The decimal representation is: %d\n", a);

    if (LEASTSIGNIFICANT(a)) {
        printf("The least significant bit is: 1\n");
    } else {
        printf("The least significant bit is: 0\n");
    }
}
