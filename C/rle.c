#include <stdio.h>
#include <stdlib.h>

int *v ;

int main ( int argc , char** argv ) {
	
	int n , j , i ;
	int tmp = 1 ;
	
	puts("Inserisci il numero di elementi : ");
	scanf("%d",&j);
	
	v = (int * ) malloc(sizeof(int)*j) ;
	
	for ( n = 0 ; n < j ; n++ ) {
		
		scanf("%d",&v[n]);
		
	}
	
	for ( i = 0 ; i < j ; i++ ) {
		
		if ( v[i] == 0 ) continue ;
		
		for ( n = i + 1 ; n < j ; n++ ) {
			
			if ( v[i] == v[n] )  { 
				tmp++ ; 
				v[n] = 0 ;
				}
			
		}
		
		printf( "%d :3 %d\n" , v[i] , tmp ) ;
		tmp = 1 ;
		
	}
}
