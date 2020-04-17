/*
** 筛选法选质数，除2以外的所有偶数都不是质数，所以数组元素只对应奇数 
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

int
main()
{
	char sieve[ SIZE ]; /* the sieve */
	char *sp; /* pointer to access the sieve */
	int number; /* number we’re computing */
/*
** Set the entire sieve to TRUE.
*/
	for( sp = sieve; sp < &sieve[ SIZE ]; )
		*sp++ = TRUE;
/*
Solution 6.4 continued . . .
Pointers on C—Instructor′s Guide 33
** Process each number from 3 to as many as the sieve holds. (Note: the
** loop is terminated from inside.)
*/

	for( number = 3; ; number += 2 ){
/*
** Set the pointer to the proper element in the sieve, and stop
** the loop if we’ve gone too far.
*/
		sp = &sieve[0]+( number-3) / 2;

		if( sp >= &sieve[ SIZE ] )
		break;
/*
** Now advance the pointer by multiples of the number and set
** each subsequent entry FALSE.
*/
		while( sp += number, sp < &sieve[ SIZE ])
					*sp = FALSE;

}
/*
** Go through the entire sieve now and print the numbers corresponding
** to the locations that remain TRUE.
*/
		printf( "2\n" );
		for( number = 3, sp = &sieve[ 0 ];
			sp < &sieve[ SIZE ];
			number += 2, sp++ ){
			if( *sp )
			printf( "%d\n", number );
}
		return EXIT_SUCCESS;
}
