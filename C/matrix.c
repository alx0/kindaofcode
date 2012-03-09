#include <stdio.h>
#include <stdbool.h>

const int R = 6 ;
const int C = 8 ;

void carica_matrice( int matrix[R][C] ) {

	for ( int i = 0 ; i < R ; i++ ) {

		for ( int j = 0 ; j < R ; j++ ) {

			printf("Inserisci l'elemento per la riga %d e la colonna %d : ",i,j) ;

			scanf("%d",&matrix[i][j]) ;

		}

	}

}

bool verify( int matrix[R][C] ) {

	for ( int i = 0 ; i < R ; i++ ) {

		for ( int j = 0 ; j < C ; j++ ) {

			if ( (j % 2 == 0) && ( matrix[i][j] % 2 != 0 ) ) continue ; 
			if ( (j % 2 != 0 ) && ( matrix[i][j] % 2 == 0 ) ) continue ;
			else return false ;

		}

	}

	return true ;

}

int main ( int argc , char** argv ) {

	int matrix[6][8] ;

	carica_matrice( matrix ) ;

	if ( verify(matrix) ) {

		puts("SI") ;

	}

	else puts("NO") ;

	return 0 ;

}
