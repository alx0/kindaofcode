#include <stdio.h>

int main ( ) {
	
	int n ;
	scanf( "%d" , &n ) ;
	
	while ( n != 1 ) {
		
		n = ( n % 2 == 0 ) ? n / 2 :  n * 3 + 1 ;
		
		printf("%d ",n);
		
	}
	
	return 0 ;
	
}
