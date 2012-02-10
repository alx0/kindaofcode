/*
   * ========================================
   * Filename : maze.c
   * 
   * Description : An application solving a maze
   *
   * Compiler : gcc
   *
   * Author : alx <phoenix0@autistici.org>
   * 
   * ========================================
*/

#include <stdio.h>

#define ROWS 7
#define COL 5

void print ( char m[ROWS][COL] ) {
   
   int i , j ;

   for ( i = 0 ; i < ROWS ; i++ ) {
      for ( j = 0 ; j < COL ; j++ ) {
	 printf("%c ",m[i][j]);
	}
      puts("");
   }

}

typedef struct {

   char destra ;
   char sinistra ;
   char sopra ;
   char sotto ;

} intorno  ;

int main ( ) {

   intorno l ;
   char a , start ;
   int x  , y ;
   char lab[ROWS][COL] = { { 'P' , 'P' , 'P' , 'P' , 'P'} ,
      		     { 'E' , ' ' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , ' ' , 'P' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , 'P' , 'P' },
		     { 'P' , 'P' , 'G' , 'P' , 'P' }} ;
   x = 6 ;
   y = 2 ;

   
   while ( a != 'E' ) {

      l.destra = lab[x][y+1] ;
      l.sinistra = lab[x][y-1] ;
      l.sopra = lab[x-1][y] ;
      l.sotto = lab[x+1][y] ;

      if ( l.sopra == 'E' || l.destra == 'E' || l.sinistra == 'E' || l.sotto == 'E' ) {

	 lab[x][y] = 'F' ;
	 a = 'E' ;
	 puts("THANK GOD! THE OUTPUT! :3");
	 break ;
      }

      else if ( l.destra == ' ' ) {
	 lab[x][y] = 'F' ;
	 y++ ;
	 a = ' ' ;
      }
	 
      else if ( l.sopra == ' ' ) {
	 lab[x][y] = 'F' ;
	 x-- ;
	 a = ' ' ;
      }

      else if ( l.sinistra == ' ' ) {
	 lab[x][y] = 'F' ;
	 y-- ;
	 a = ' ' ;
      }

      else if ( l.sotto == ' ' ) {
	 lab[x][y] = 'F' ;
	 x++ ;
	 a = ' ' ;
      }

       if ( l.destra == 'P' && l.sopra == 'P'  ) {
	  lab[x][y] = 'F' ;
	  y-- ;
	  a = ' ' ;

      }


     }

   print( lab ) ;


   return 0 ;

}
