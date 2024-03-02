#include <stdio.h>
#define INTERMEDIATE(a, b) (a*b) //defining INTERMEDIATE

int main(){
	int n, i, scalar;
	//size of the vectors
	scanf("%d", &n);
	int v1[n], v2[n];
	//loop to scan the values of the vectors
	for(i = 0; i < n; i++){
		scanf("%d", &v1[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &v2[i]);
	}
	//calculating the scalar product
	for(i = 0; i < n; i++){
		scalar = scalar + INTERMEDIATE(v1[i], v2[i]);
	}
	//using conditional programming
	#ifdef INTERMEDIATE
	printf("The intermediate product values are:\n");
	for (i = 0; i < n; i++){
		printf("%d\n", INTERMEDIATE(v1[i], v2[i]));
	}
	printf("The scalar product is: %d", scalar);
	#else
	printf("The scalar product is: %d",scalar);
	#endif

	return 0;
}
