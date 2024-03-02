#include <stdio.h>
    /*
    CH-230-A
    a6 p1.[c or cpp or h]
    Jaydev Dhanji
    jdhanji@jacobs-university.de
    */
    //Problem 1
//defining the macros to swap the 2 integers and doubles
#define SWAP1(x,y, int)int t;t=x;x=y;y=t;
#define SWAP2(x,y, double)double a; a=x; x=y; y=a;

int main(){
    //inputs
    int e,f;
    double g,h;

    //reading the values from the keyboard
    scanf("%d%d", &e,&f);
    scanf("%lf%lf", &g,&h);

    //calling the SWAP macro
    SWAP1(e,f, int);
    SWAP2(g,h, double);

    //printing the results of the swap
    printf("After swapping:\n%d\n%d\n%lf\n%lf\n", e,f,g,h);
}

