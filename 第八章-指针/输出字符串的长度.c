#include <stdio.h>
//输出字符串的长度 
#define N 80
int fun(char *a);
int main()
{
	char str[N],*p;
	p=str;
	printf("请输入字符串:");
	gets(str);
	printf("该字符串长度为：%d",fun(str));
	return 0;
}

int fun(char *a)
{
	int i=0;
	char *q;
	q=a;
	for(i=0;*q++!='\0';i++);
	return i;
}

