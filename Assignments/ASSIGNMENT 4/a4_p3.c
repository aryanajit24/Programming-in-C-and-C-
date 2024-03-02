/*
CH-230-A
a4 p3.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
float geometric_mean(float arr[], int num){
    float product=1;
    int j;

    for(j=0; j<num ; j++){
        product =product*arr[j];
    }
    //calculating the geometric mean
    float geomean;
    geomean= pow(product, 1/num);
    //returns the value of the geometric mean
    return geomean;
}

//function to find the highest number
float highest_number(float arr[], int num){
    float b=arr[0];
    int k;
    //finding the highest num
    for (k=0; k<num; k++){
        if (b<arr[k]){
        b=arr[k];
        }
    }
    //returning value of the highest num
    return b;
}
//function to find the smallest num
float smallest_number(float arr[], int num){
    float b=arr[0];
    int k;
    // finding the smallest num
    for (k=0; k<num; k++){
        if(b>arr[k]){
            b=arr[k];
        }
    }
    //returning the value of the smallest num
    return b;
}

//calculate the sum of all the elements in the array
float sumofallelements(float arr[], int num){
    float b=0;
    int k;
    for(k=0; k<num; k++){
        b += arr[k];
    }
    //returning the value of the sum of all elements
    return b;
}
int main(){
    //inputs
    float array[15];
    char a;
    int i;
    float x;


    printf("Enter up to 15 numbers and a negative number to stop entering:\n");
    //loop to make sure no more than 15 values are entered
    for(i=0;i<15;){
            scanf("%f", &x);
        if(x < 0){
            break;
        }
        else{
            array[i] = x;
            i++;
        }
    }

    printf("choose the value you want from the list below:\n");
    printf("m: Geometric mean\n");
    printf("h: Highest Number\n");
    printf("l: Smallest Number\n");
    printf("s: Sum OF All Elements\n");
    scanf(" %c", &a);

    switch(a){
    case 'm':
        printf("Geometric mean is %f", geometric_mean(array, i));
    break;

    case 'h':
        printf("Highest Number is %f", highest_number(array, i));
    break;

    case 'l':
        printf("Smallest Number is %f", smallest_number(array, i));
    break;

    case 's':
        printf("Sum Of All Elements is %f", sumofallelements(array, i));
    break;

    }

return 0;
}
