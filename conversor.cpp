#include <stdio.h>

int main ( void ) {

  int op;
  float x;

 printf ( "converter\n" ); 
 printf ( "\t(1) Unidades metricas\n" );
 printf ( "\t(2) Unidades volumetricas\n" );

 scanf ( "%d" ,&op ) ;

switch ( op ) {

 case 1:

  printf ("(1) m - > km\n" );
  printf ("(2) km - > m\n" );

  scanf ( "%d" ,&op );

if ( op == 1) {

  printf ( "m = ?\n" );
    scanf ( "%f" ,&x );

  printf ( "km = %f\n" , x/1000.);

   } 

else {

  printf ( "km =?\n" );
    scanf ( "%f" ,&x );

  printf ( "m = %f\n" ,  x * 1000);

   }

break ;

case 2:

  printf ( "Por implementar" );

default :


   printf ( "Opcao incorreta" );

}

 return 0;

}

