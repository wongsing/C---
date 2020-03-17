/*
** Main program to test the increment and negate functions.
*/
#include <stdio.h>
main( void )
{
printf( "%d %d\n", increment( 10 ), negate( 10 ) );
printf( "%d %d\n", increment( 0 ), negate( 0 ) );
printf( "%d %d\n", increment( -10 ), negate( -10 ) );
}
