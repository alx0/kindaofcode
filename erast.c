#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc , char** argv) {
	
	int n ;
	int *v ;
	int i , j ;
	
	printf("Insert a number : ");
	scanf("%d",&n);
	
	v = (int*) malloc(n*sizeof(int)) ;
	
	for ( i = 2 ; i < n ; i++ ) {
		
		*(v+i) = i ;
		
	}
	
	i = 2 ;
	while ( pow(i,2) < n ) { 
		
		for ( j = 2 ; j < n ; j++ ) {
			
			if ( *(v+j) == i ) continue ;
			if ( *(v+j) % i == 0 ) *(v+j) = 0 ; 
			
		}
		
		i++ ;
		
	}
	
	for ( j = 0 ; j < n ; j++ ) {
		
		if ( *(v+j) == 0 ) continue ;
		else printf("%d\n",*(v+j));
		
	}
	
	free(v);
	
	return 0 ;
	
}
		
		
