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

typedef struct {

   char destra ;
   char sinistra ;
   char sopra ;
   char sotto ;

} intorno  ;

typedef struct {

   int x ;
   int y ;

} last  ;

int main ( ) {

   intorno l ;
   last f ;
   last no ;
   char a , start ;
   int x  , y ;
   char lab[7][5] = { { 'P' , 'P' , 'P' , 'P' , 'P'} ,
      		     { 'E' , ' ' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , ' ' , 'P' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , 'P' , 'P' },
		     { 'P' , 'P' , 'G' , 'P' , 'P' }} ;
   x = 6 ;
   y = 2 ;

   f.x = x ;
   f.y = y ;
   no.x = 0 ;
   no.y = 0 ;

   
   while ( a != 'E' ) {

      l.destra = lab[x][y+1] ;
      l.sinistra = lab[x][y-1] ;
      l.sopra = lab[x-1][y] ;
      l.sotto = lab[x+1][y] ;

      if ( l.sopra == 'E' || l.destra == 'E' || l.sinistra == 'E' || l.sotto == 'E' ) {

	 a = 'E' ;
	 puts("THANK GOD! THE OUTPUT! :3");
	 break ;
      }

      else if ( l.destra == ' ' ) {
	 f.x = x ;
	 f.y = y ;
	 y++ ;
	 a = ' ' ;
      }
	 
      else if ( l.sopra == ' ' ) {
	 f.x = x ;
	 f.y = y ;
	 x-- ;
	 a = ' ' ;
      }

      else if ( l.sinistra == ' ' ) {
	 f.x = x ;
	 f.y = y ;
	 y-- ;
	 a = ' ' ;
      }

      else if ( l.sotto == ' ' ) {
	 f.x = x ;
	 f.y = y ;
	 x++ ;
	 a = ' ' ;
      }

       if ( l.destra == 'P' && l.sopra == 'P'  ) {

	  lab[x][y] = 'P' ;
	  y-- ;
	  a = ' ' ;

      }


     }


   return 0 ;

}
