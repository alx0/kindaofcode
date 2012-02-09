#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc , char** argv ) {

   FILE* f = fopen( argv[1] , "r" ) ;
   char* str ;
   int i ;
   str = ( char * ) malloc(20*sizeof( char * )) ;

   fscanf(f,"%s",str);

   for ( i = 0 ; i < strlen(str) ; i++ ) {

	 if ( str[i] == 'H' ) {

	    puts("Hello World!");

	 }

	 else if ( str[i] == 'Q' ) {

	    printf("%s\n",str);

	 }

	 else if ( str[i] == '9' ) {

	    printf("Ninety-nine bottles of beer on the wall,\n"
		  "Ninety-nine bottles of beer.\n"
		  "Take on down , pass it around\n"
		  "Ninety-eight bottles of beer on the wall\n"
		  ".........\n"
		  "No more bottles of beer on the wall,\n"
		  "no more bottles of beer\n"
		  "Go to the store and buy some more,\n"
		  "Ninety-nine bottles of beer on the wall\n");

	 }

	 else if ( str[i] == '+' ) {

	    printf("+\n");

	 }

   }

   return 0 ;

}
