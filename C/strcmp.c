//strcmp's re-implementation
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20 

bool stringcmp( char *s1 , char *s2 ) {

	for ( int i = 0 ; i < strlen(s2) ; i++ ) {

		if ( s1[i] == s2[i] ) continue ;

		else return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	char* s1 = (char*) malloc(MAX*sizeof(char*)) ;
	char* s2 = (char*) malloc(MAX*sizeof(char*)) ;

	printf("Inserisci la prima stringa : ") ;
	scanf("%s",s1) ;

	printf("Inserisci la seconda stringa : ") ;
	scanf("%s",s2) ;

	if ( stringcmp( s1 , s2 ) ) printf("SUCCESS!!\n") ;

	else printf("FAILED...\n") ;

	return 0 ;

}
