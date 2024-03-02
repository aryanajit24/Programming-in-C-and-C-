#include <stdio.h>
#include <math.h>
    /*
    CH-230-A
    a4 p1.[c or cpp or h]
    Jaydev Dhanji
    jdhanji@jacobs-university.de
    */
    //Problem 1

int main(){
    /*int variables and reading from the keyboard*/
    float a;//lower limit
    scanf("%f", &a);
    float b;//upper limit
    scanf("%f", &b);
    float c;//step size
    scanf("%f", &c);


    //condition setting the lower and upper limit
    //and adding the step size
    for ( ; a<=b ; a+= c){
        //printing value of the radius
        printf("%f", a);
        //calculating area of the circle
        printf(" %f", a*a*M_PI);
        //calculating circumference/perimeter of the circle
        printf(" %f\n", a*2*M_PI);
    }


    return 0;
}

