//Generate primes between two numbers
//1 to 1000000 in 3.30 sec ;)
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsPrime( int n ) {

	for ( int i = 3 ; i < sqrt(n) ; i+=2 ) {

		if ( n % i == 0 ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	FILE *f = fopen("input.txt" , "r") ;
	int beg , end ;
	int n ;

	fscanf( f , "%d", &n) ;

	for ( int i = 0 ; i < n ; i++ ) {

		fscanf( f , "%d %d",&beg,&end) ;

		for ( int j = beg ; j <= end ; j++ ) {

			if ( IsPrime(j) ) printf("%d\n",j) ;

		}

		printf("--\n") ;

	}

	return 0 ;

}
