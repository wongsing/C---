#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define DELTA 256
/*此解决方案中使用的策略是在readstring中保留动态分配的缓冲区
功能。 如果在读取字符串时填满，则会放大。 增量DELTA可以调整
在最小化浪费空间和最小化发生的重新分配数量之间取得平衡。 
如果任何内存分配失败，则assert宏用于中止程序。
为返回给调用方的字符串的副本分配了一个新的内存块，这是
避免了每次读取字符串时从头开始动态增长数组的开销。
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
		assert( buffer != NULL ); //断言，检查 
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

