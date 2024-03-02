#include <stdio.h>
char set3bits(unsigned char c, int b1, int b2, int b3) {
    c |= (1 << b1);
    c |= (1 << b2);
    c |= (1 << b3);

    return c;
}
int main() {
    unsigned char c;
    scanf("%c", &c);
    getchar();
    int b1, b2, b3;
    scanf("%d%d%d", &b1, &b2, &b3);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) {
        (c & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
    c = set3bits(c, b1, b2, b3);
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--) {
        (c & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
    return 0;
}


