#include <stdio.h>
#include <stdlib.h>
//malloc只分配到了一个整型的内存空间，把函数返回的地址用(int*)强制转换成整型指针
//赋给abc，三个指针都指向同一个空间，所以最后的赋值3就是该空间所存的值 
int main()
{
	int *a , *b,*c;
	a=b=c=(int *)malloc(sizeof(int));
	*a=1;
	*b=2;*c=3;
	a=b;
	printf("%d , %d, %d\n",*a,*b,*c);
} 
