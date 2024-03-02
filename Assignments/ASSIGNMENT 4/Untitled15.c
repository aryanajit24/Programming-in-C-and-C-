#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float geomean(float arr[], int num){
    float prods = 1;
    int x;

    for(x = 0; x < num; x++){
            prods = prods * arr[x];
            }
            float geomean;
            geomean = pow(prods, 1.0 / num);
            return geomean;
            }
            float highestnum(float arr[], int y){
                float curh = arr[0];
                int x;
                for (x = 1; x<y; x++){
                        if (curh < arr[x])
                        curh = arr[x];
                }
                return curh;
                }
                float lowestnum(float arr[], int y){
                    float curl = arr[0];
                    int x;
                    for(x=1; x<y; x++){
                            if (curl > arr[x])
                            curl = arr[x];
                    }
                    return curl;
                    }
                    //sum
                    float sum(float arr[], int y){
                        int x;
                        float s = 0;
                        for (x = 0; x < y; x++){
                                s += arr[x];
                        }
                        return s;
                        }
int main(){
    float Tvalues[15];
    char c;
    int m;
    printf("Enter 0-15 numbers (ending with a negative number): \n");

    for(m = 0; m<15; ){
        float input;
        scanf("%f", &input);
        if(input < 0){
            break;
        }
        else{
            Tvalues[m] = input;
            m++;
        }
    }
    printf("\n m: geometric mean \n h: highest number \n l: smallest number \n s: sum \n ");
    scanf(" %c", &c);

switch(c){
    case 'm': printf("Geometric mean = %f", geomean(Tvalues, m));
    break;
    case 'h': printf("Highest number= %f", highestnum(Tvalues, m));
    break;
    case 's': printf("Sum of numbers= %f", sum(Tvalues, m));
    break;
    case 'l':printf("Lowest Number= %f", lowestnum(Tvalues, m));
    }
    return 0;
}
