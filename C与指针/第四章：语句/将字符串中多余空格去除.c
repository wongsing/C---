/*
** Shrink runs of white space in the given string to a single space.
*/
//���ַ����еĶ���ո�ȥ��,������ָ�� 
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
��Դָ���Ŀ��ָ������Ϊ�ַ����Ŀ�ͷ��
Ȼ�������ַ����еĵڶ����ַ���
*/
	src = string;
	dest = string++;
/*
**���Դ�ַ����е�ÿ���ַ���
*/
	while( (ch = *src++) != NUL ){
	if( is_white( ch ) ){
/*
���Ƿ��ֿհס� ����������ַ����Ŀ�ͷ��
Ŀ���е�ǰһ���ַ����ǿհף��洢�հס�
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
