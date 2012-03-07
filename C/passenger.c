#include <stdio.h>


#define X 7
#define Y 7

int matrix[X][Y] = { { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' } ,
			   { ' ' , ' ' , 'E' , ' ' , 'E' , ' ' , ' ' } ,
			   { ' ' , ' ' , 'E' , ' ' , ' ' , 'E' , ' ' } ,
			   { 'E' , ' ' , ' ' , ' ' , ' ' , ' ' , 'E' } ,
			   { ' ' , 'E' , 'E' , ' ' , ' ' , 'E' , ' ' },
			   { ' ' , ' ' , ' ' , ' ' , 'E' , ' ' , ' ' },
			   { ' ' , ' ' , ' ' , 'F' , ' ' , ' ' , ' ' } } ;


typedef struct {

	int x ;
	int y ;

} punto ;

void print ( int m[X][Y] ) {

	for ( int i = 0 ; i < X ; i++ ) {

		for ( int j = 0 ; j < Y ; j++ ) {

			printf("%c ",m[i][j]) ;

		}

		printf("\n") ;

	}

}

int get_adjacenty ( int x ) { //This will return the y coordinate of the city located upon

	for ( int i = 0 ; i < Y ; i++ ) {

		if ( matrix[x+1][i] == 'F' ) {

			return i ;

		}

		if ( matrix[x+1][i] == 'E' ) {

			matrix[x+1][i] = '*' ;

			get_adjacenty( x+1 ) ;
			
			break ;

		}

	}

	return 0 ;

}

int main ( ) {


	int n = get_adjacenty(0) ;

	print( matrix ) ;

	return 0 ;

}

