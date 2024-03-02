#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b,c) (a<b?(a<c?a:c):(b<c?b:c))
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
#define MIDRANGE(a,b,c) ((MIN(a,b,c)+MAX(a,b,c))/2.0)

int main(){
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);

    printf("The mid-range is: %.6f\n", MIDRANGE(x,y,z));
return 0;
}

