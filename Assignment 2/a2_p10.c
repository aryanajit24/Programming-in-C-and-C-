#include <stdio.h>
#include <stdbool.h>
int main(){
    int a=1;//using this a starting point for my loop
    int n;//integer(number of days) which will be assigned by the user
    int x;//number of hours in a day
    scanf("%d", &n);
    /*using a while loop, by putting a condition "a <= n)" to give a sequence from
    1 to n days so that it repeats itself until a is equal to n*/
    while (n<=0){
        printf("Invalid input please enter valid input\n");
        getchar();
        scanf("%d", &n);

    }
        while (a<=n)
        /* the value of n will always be positive
        as it's greater than 1*/
    {

       x=(n*24);//increase the value of hours by 24 every time the loop condition is true

       if(a<2){//using this to let the program decide were to day or/and days
        printf("%d day = %d hours\n", a, x);
       }
       else {
        printf("%d days = %d hours\n",a, x);
       }
       ++a;//increase the value of a by 1 every time the loop condition is true
    }
return 0;
}

