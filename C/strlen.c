//strlen's re-implementation
#include <stdio.h>
#include <stdlib.h>

#define LEN 20

size_t stringlen( char* str ) {

	char c = str[0] ;
	int i = 0 ;

	while ( c != '\0' ) {

		c = str[i] ;

		i++ ;

	}

	return i-1 ;

}

int main( ) {

	char* str = (char*) malloc(LEN*sizeof(char*)) ;

	printf("PUT A STRING , GODDAMMIT : ") ;
	scanf("%s",str) ;

	printf("%ld\n",stringlen(str)) ;

	return 0 ;

}
