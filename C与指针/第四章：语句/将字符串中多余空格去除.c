/*
** Shrink runs of white space in the given string to a single space.
*/
//将字符串中的多余空格去除,用两个指针 
#include <stdio.h>
#define NUL '\0'
void
deblank( char *string );

int main()
{
	char a[] = "acs  da  dsdas    ds";
	deblank(a);
	printf("%s",a);
}

void
deblank( char *string )
{
	char *dest;
	char *src;
	char ch;
/*
将源指针和目标指针设置为字符串的开头，
然后移至字符串中的第二个字符。
*/
	src = string;
	dest = string++;
/*
**检查源字符串中的每个字符。
*/
	while( (ch = *src++) != NUL ){
	if( is_white( ch ) ){
/*
我们发现空白。 如果我们在字符串的开头或
目标中的前一个字符不是空白，存储空白。
*/
	if( src == string || !is_white( dest[-1] ) )
	*dest++ = ' ';
}
	else {
/*
** Not white space: just store it.
*/
	*dest++ = ch;
	} 
}
	*dest = NUL;
}
int
is_white( int ch )
{
	return ch == ' ' || ch == '\t' || ch =='\v' || ch == '\f' || ch == '\n'
	|| ch == '\r';
}
