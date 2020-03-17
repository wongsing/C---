#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define DELTA 256
/*�˽��������ʹ�õĲ�������readstring�б�����̬����Ļ�����
���ܡ� ����ڶ�ȡ�ַ���ʱ���������Ŵ� ����DELTA���Ե���
����С���˷ѿռ����С�����������·�������֮��ȡ��ƽ�⡣ 
����κ��ڴ����ʧ�ܣ���assert��������ֹ����
Ϊ���ظ����÷����ַ����ĸ���������һ���µ��ڴ�飬����
������ÿ�ζ�ȡ�ַ���ʱ��ͷ��ʼ��̬��������Ŀ�����
*/
char *
readstring()
{
	static char *buffer = NULL;
	static int buffer_size = 0;
	int ch;
	int len;
	char *bp;
	bp = buffer;
	len = 0;

/*
** Get characters one at a time until a newline is read or EOF is
** reached.
*/
do {
	ch = getchar();
	if( ch == '\n' || ch == EOF )
	ch = '\0';
/*
** If the buffer is full, make it bigger.
*/
	if( len >= buffer_size ){
		buffer_size += DELTA;
		buffer = realloc( buffer, buffer_size );
		assert( buffer != NULL ); //���ԣ���� 
		bp = buffer + len;
}
	*bp++ = ch;
	len += 1;
} while( ch != '\0' );
/*
** Make a copy of the string to return.
*/
	bp = malloc( len );
	assert( bp != 0 );
	strcpy( bp, buffer );
	return bp;
}

int main()
{

	char *str =readstring();
	printf("%s\n",str);
	free(str);
	return 0;
}

