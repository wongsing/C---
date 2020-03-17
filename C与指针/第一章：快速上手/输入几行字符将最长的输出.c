#include <stdio.h>
#include <string.h>
#define N  1000 
//输入几行字符将最长的输出 
//先令原始长度为-1，然后比较，len大的话就复制字符串，值赋给longest_len
//重点是要多一个数组储存，然后开始比较! l
int main()
{
	char input[N];
	char longest[N]; 
	int longest_len = -1 , len ;
	while( gets( input ) != NULL){
		len = strlen(input);
		if(len > longest_len) {
			strcpy(longest,input);
			longest_len = len;
		}
	}
	if(longest_len>=0) puts(longest);
	return 0;
}
