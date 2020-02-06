#include <stdio.h>
#include <stdlib.h>
//
int fun(int n)
{
	int *p;
	p=(int*)malloc(sizeof(int));
//开辟了一个长度为sizeof(int)的存储空间并强制转换
//成(int*)将此空间地址赋给整型指针变量p,一直存在 
	*p=n;
	return *p;
}

int main()
{
	int a;
	a=fun(10);
	printf("%d\n",a+fun(10));
	return 0;
}
