#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
用动态内存分配制作一个字符串的拷贝，
注意调用程序要检查这块内存是否成功分配 
*/
char *
strdup(char const *string)
{
	char *new_string;
	//请求足够长的内存，+1是原来字符串的'\0'处 
	new_string = malloc(sizeof(string)+1);
	//成功分配就拷贝字符串 
	if(new_string != NULL)
		strcpy( new_string , string);
		
	return new_string;
}

int main()
{
	char *str = "hello world!", *str1;
	str1 = strdup(str);
	printf("%s\n",str1);
	free(str1);
	return 0;	
}
