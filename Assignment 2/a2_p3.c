#include <stdio.h>

    int main(){
        int weeks,days,hours;//assigning integers
        printf("Enter number of weeks= ");
        scanf("%d",&weeks);//using 'scanf' to let the user decide the values of the assigned variables
        printf("Enter number of days= ");
        scanf("%d",&days);
        printf("Enter number of hours= ");
        scanf("%d",&hours);

        int a=weeks*7;//converting the number of weeks to number of days
        int b=(a+days)*24;//converting number of days to number of hours
        int c=b+hours;/*adding the number of hours the user inputed to the
        converted number of hours from the days and weeks*/
        printf("\nTotal number of hours=%d\n",c);

return 0;
}
