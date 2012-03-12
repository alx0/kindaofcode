//Solution of a Italian Informatic Olympics problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int iniziox = 3 ;
const int inizioy = 3 ;
typedef struct {

	int x ;
	int y ;

} Punto ;

int main ( int argc , char** argv ) {

	char direzione = '0' ;
	Punto p ;
	int distanza = 0 ;
	FILE *input = fopen("input.txt","r") ;
	FILE *output = fopen("output.txt","w") ;
	p.x = iniziox ;
	p.y = inizioy ;

	while ( direzione != '*' ) {

		fscanf( input , "%c",&direzione) ;

		if ( direzione == 'N' ) p.y-- ;
		if ( direzione == 'S' ) p.y++ ;
		if ( direzione == 'E' ) p.x++ ;
		if ( direzione == 'O' ) p.x-- ;

	}

	if ( p.x < 0 ) p.x = abs(p.x) ;
	if ( p.y < 0 ) p.y = abs(p.y) ;
	
	distanza = (pow( ( p.x - iniziox) , 2 ) + ( pow( ( p.y - inizioy) , 2 ) ) ) ;

	fprintf( output , "%d" , distanza ) ;

	fclose( input ) ;
	fclose( output ) ;

	return 0 ;

}
