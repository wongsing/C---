/*
** Convert a numeric value to words.
*/
#include <stdio.h>
#include <string.h>

void
written_amount( unsigned int amount, char *buffer );
static void
do_one_group( unsigned int amount, char *buffer, char **magnitude );

static char *digits[] = {
"", "ONE ", "TWO ", "THREE ", "FOUR ", "FIVE ", "SIX ", "SEVEN ",
"EIGHT ", "NINE ", "TEN ", "ELEVEN ", "TWELVE ", "THIRTEEN ",
"FOURTEEN ", "FIFTEEN ", "SIXTEEN ", "SEVENTEEN ", "EIGHTEEN ",
"NINETEEN "
};
static char *tens[] = {
"", "", "TWENTY ", "THIRTY ", "FORTY ", "FIFTY ", "SIXTY ", "SEVENTY ",
"EIGHTY ", "NINETY "
};
static char *magnitudes[] = {
"", "THOUSAND ", "MILLION ", "BILLION "
};
/*
** Convert the last 3¨Cdigit group of amount to words. Amount is the value
** to be converted, buffer is where to put the words, and magnitude is the
** name of the 3¨Cdigit group we¡¯re working on.
*/

int main()
{
	unsigned int num = 6312;
	char buffer[1000]={0};
	do_one_group(num,buffer,magnitudes);
	printf("%s",buffer);
	return 0;
}

static void
do_one_group( unsigned int amount, char *buffer, char **magnitude )
{
	int value;
/*
** Get all the digits beyond the last three. If we have any value
** there, process those digits first. Note that they are in the next
** magnitude.
*/
	value = amount / 1000;
	if( value>0)
	do_one_group( value, buffer, magnitude + 1 );
/*
** Now process this group of digits. Any hundreds?
*/
	amount %= 1000;
	value = amount / 100;
	if( value > 0 ){
		strcat( buffer, digits[ value ] );
		strcat( buffer, "HUNDRED " );
}
/*
** Now do the rest of the value. If less than 20, treat it as a single
** digit to get the teens names.
*/
		value = amount % 100;
		if( value >= 20 ){
/*
** Greater than 20. Do a tens name and leave the units to be
** printed next.
*/
		strcat( buffer, tens[ value / 10 ] );
		value %= 10;
}
		if( value>0)
			strcat( buffer, digits[ value ] );
/*
** If we had any value in this group at all, print the magnitude.
*/
		if( amount>0)
			strcat( buffer, *magnitude );
}
void
written_amount( unsigned int amount, char *buffer )
{
		if( amount == 0 )
/*
** Special case for zero.
*/
		strcpy( buffer, "ZERO " );
else {
/*
** Store an empty string in the buffer, then begin.
*/
		*buffer = '\0';
		do_one_group( amount, buffer, magnitudes );
	} 
}
