//Soluzione al problema Giri sulla scopa Nimbus3000
#include <stdio.h>
#include <stdlib.h>

int get_min( int *array , int len ) {

	int i , min=0 ;

	for ( i = 0 ; i < len ; i++ ) {

		if ( array[i] < array[i+1] ) min = array[i] ;

	}

	return min ;

}

int main ( int argc , char** argv ) {

	int *array ;
	FILE *input = fopen("input.txt" , "r") ;
	FILE *output = fopen("output.txt" , "w" ) ;
	int i , m ;
	int tmp1 , tmp2 ;
	fscanf( input , "%d",&m) ;
	array = ( int* ) malloc( m * sizeof(int*)) ;

	for ( i = 0 ; i <= m ; i++ ) {

		fscanf( input , "%d %d",&tmp1,&tmp2) ;
		array[i] = tmp2 - tmp1 ;

	}

	fprintf( output , "%d", get_min(array,m)) ;
	fclose(input) ;
	fclose(output) ;

	return 0 ;

}
