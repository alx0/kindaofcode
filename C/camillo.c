//Solution of a problem of Italian Informatic Olympics problem
#include <stdio.h>


int main ( int argc , char** argv ) {

	FILE* input = fopen("input.txt" , "r" ) ;
	FILE* output = fopen("output.txt" , "w") ;

	int mil100 = 0, mil10 = 0  , mil5 = 0 , mil2 = 0 , mil = 0 , n ;

	fscanf(input,"%d",&n) ;

	while ( n != 0 ) {

		if ( n >= 100000 ) {
		     	n-= 100000 ; 
			mil100++ ; 
			continue ;
		}

		if ( n >= 10000 ) {
			n -= 10000 ;
		     	mil10++ ; 
			continue ;
		}

		if ( n >= 5000 ) {
			n -= 5000 ;
		     	mil5++ ;
		     	continue ;
		}

		if ( n >= 2000 ) {
			n -= 2000 ;
			mil2++ ;
			continue ;
		}

		if ( n >= 1000 ) {
			n -= 1000 ;
		     	mil++ ;
		     	continue ;
		}

	}

	fprintf( output , " %d \n %d \n %d \n %d \n %d \n", mil100 , mil10 , mil5 , mil2 , mil ) ;

	fclose( input ) ;
	fclose( output ) ;

	return 0 ;

}

