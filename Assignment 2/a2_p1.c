#include <stdio.h>
int main(){
    double x,y;//defining 2 variable x and y
    scanf("%lf",&x);
    scanf("%lf",&y);
// using the defined variable to do the Arithmetic operations
    printf("sum of doubles=%lf\n",x+y);
    printf("difference of doubles=%lf\n",x-y);
    printf("square=%lf\n",x*x);

    int a,b;// defining 2 other variables a and b
    scanf("%d",&a);
    scanf("%d",&b);
// using the integers to answer the test case
    printf("sum of integers=%d\n",a+b);
    printf("product of integers=%d\n",a*b);

    char c,d;
    getchar();
    scanf("%c",&c);
    getchar();
    scanf("%c",&d);

    printf("sum of chars=%d\n",c+d);
    printf("product of chars=%d\n",c*d);
    printf("sum of chars=%c\n",c+d);
    printf("product of chars=%c\n",c*d);
return 0;
}

