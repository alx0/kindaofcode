//Bubble sort
#include <stdio.h>

#define LEN 10

void bsort( int* v , int len ) {

	int tmp ;

	for ( int i = 0 ; i < len ; i++ )
		for ( int j = 0 ; j < len ; j++ ) 
			if ( v[j] > v[j+1] ) {

				tmp = v[j] ;
				v[j] = v[j+1] ;
				v[j+1] = tmp ;

			}


}

int main ( int argc , char** argv ) {

	int v[LEN] = { 32 , 254 , 213 , 5 , 232 , 42 , 21 , 23 , 17 , 22 } ;

	bsort( v , LEN ) ;

	for( int i = 0 ; i < LEN ; i++ )
		printf("%d\n",v[i]) ;

	return 0 ;

}


