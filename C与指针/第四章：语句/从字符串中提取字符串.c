#include <stdio.h>
#include <string.h>
//从字符串中提取字符串,src向后移start位置，最多赋值len个非0字符到dst数组
//start 超越src数组尾部、或者start或len为负，那么复制到dst的是空字符串
//函数返回的是存储在dst的字符串的长度


int substr(char dst[] , char src[],int start ,int len);
int main()
{
	char dst[] = "abcd";
	char src[] = "zzzzzz";
	int start = 2 , len = -1 , ret;	
	ret=substr(dst,src,start,len);
	printf("dst的字符串长度为:%d",ret);
	return 0;
}

int
substr( char dst[], char src[], int start, int len )
{
	int srcindex;
	int dstindex;
	dstindex = 0;
	if( start >= 0 && len > 0 ){
/*
** Advance srcindex to right spot to begin, but stop if we reach
** the terminating NUL byte.
*/
	for( srcindex = 0;
	srcindex < start && src[srcindex] != '\0';
	srcindex += 1 );
/*
** Copy the desired number of characters, but stop at the NUL if
** we reach it first.
*/
	while( len > 0 && src[srcindex] != '\0' ){
	dst[dstindex] = src[srcindex];
	dstindex += 1;
	srcindex += 1;
	len -= 1;
	} 
}
/*
** Null–terminate the destination.

*/
	dst[dstindex] = '\0';
	return dstindex;
}
