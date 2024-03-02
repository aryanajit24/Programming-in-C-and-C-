/*
CH-230-A
a4 p10.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include<math.h>
    //assigning a function
    void proddivpowinv(float a,float b,float *prod,float *div,float *pwr,float *invb){
        //assigning pointers and doing the calculations by reference
        *prod=a*b;
        *div=a/b;
        *pwr=pow(a,b);
        *invb=1/b;
}

int main(){
    float a=10.0;
    float b=3.0;
    float prod,div,pwr,invb;
    //calling the function
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);
    //printing the outputs after the values are calculated by reference
    printf("The numbers are: %f  %f\n",a,b);
    printf("The product is: %f\n",prod);
    printf("The division is: %f\n",div);
    printf("a to the power b: %f\n",pwr);
    printf("The inverse of b: %f\n",invb);

    return 0;
}
