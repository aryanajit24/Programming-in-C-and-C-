#include <stdio.h>
    int main(){
    float a,b,h;//introducing the float variables
    scanf("%f",&a);//letting the user decide the values of the input
    scanf("%f",&b);
    scanf("%f",&h);
    //using the float variable and arithmetic operators to get the answers of the area as the user inputs the digits
    printf("square area=%f\n",a*a);
    printf("rectangle area=%f\n",a*b);
    printf("triangle area=%f\n",(a*h)/2);
    printf("trapezoid area=%f\n",(a+b)*h/2);
return 0;
}
