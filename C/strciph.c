#include <stdio.h>
#include <string.h>

void strciph ( char *str ) {

	int key = 0 ;
	int n = 0 ;

	for ( int i = 0 ; i < strlen(str) ; i++ ) {

		key += str[i] ;

	}

	key /= 4 ;

	while ( key > 10 ) {

		key /= 2 ;

	}

	for ( int j = 0 ; j < strlen(str) ; j++ ) {

		n = str[j] * key ;
		printf("%d",n) ;

	}
	puts("") ;

}

int main ( ) {

	char* str = "CIAO" ;
	strciph(str) ;

	return 0 ;

}


