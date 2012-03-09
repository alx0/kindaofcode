#include <stdio.h>

const int MAX = 10 ;

int array[MAX] = { 3 , 45 , 6 , 18 , 1 , 9 , 27 , 8 , 100 , 19 } ;

void bubble_sort( int array[MAX] ) {

	for ( int i = 0 ; i < MAX ; i++ ) {

		for ( int j = 0 ; j < MAX ; j++ ) {

			if ( array[j] > array[j+1] ) {

				array[j] = array[j+1] + array[j] ;

				array[j+1] = array[j] - array[j+1] ;

				array[j] = array[j] - array[j+1] ;

			}

		}

	}

}

int search( int n , int array[MAX] ) {

	if ( array[MAX/2] == n ) {

		return MAX/2 ;

	}

	else if ( array[MAX/2] > n ) {

		for ( int i = MAX/2 ; i > 0 ; i-- ) {

			if ( array[i] == n ) return i ;

		}

	}

	else if ( array[MAX/2] < n ) {

		for ( int i = MAX/2 ; i <= MAX ; i++ ) {

			if ( array[i] == n ) return i ;

		}

	}

	return 0 ;

}

int main ( int argc , char** argv ) {

	bubble_sort( array ) ;

	int n ;

	printf("Inserisci un numero : \n") ;
	scanf("%d",&n) ;

	if ( search( n , array ) == 0 ) printf("Numero non trovato\n") ;
	else printf("Numero trovato alla posizione %d\n",search( n , array ) ) ;

	puts("") ;

	return 0 ;

}




