//Erone's algorithm for finding the N's square root.
#include <stdio.h>


#define MAX_ITERATIONS 10

float erone ( int n ) {

	float xn = n/2 ;

	for ( int i = 0 ; i < MAX_ITERATIONS ; i++ ) {

		xn = (xn + (n/xn)) / 2 ;

	}

	return xn ;

}

int main () {

	int n ;

	printf("PUT A NUMBER , SHIT! : ");
	scanf("%d",&n);

	printf("%lf\n",erone(n)) ;

	return 0 ;

}


