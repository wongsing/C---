#include <stdio.h>
#include <stdlib.h>
//mallocֻ���䵽��һ�����͵��ڴ�ռ䣬�Ѻ������صĵ�ַ��(int*)ǿ��ת��������ָ��
//����abc������ָ�붼ָ��ͬһ���ռ䣬�������ĸ�ֵ3���Ǹÿռ������ֵ 
int main()
{
	int *a , *b,*c;
	a=b=c=(int *)malloc(sizeof(int));
	*a=1;
	*b=2;*c=3;
	a=b;
	printf("%d , %d, %d\n",*a,*b,*c);
} 
