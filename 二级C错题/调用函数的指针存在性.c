#include <stdio.h>
#include <stdlib.h>
//
int fun(int n)
{
	int *p;
	p=(int*)malloc(sizeof(int));
//������һ������Ϊsizeof(int)�Ĵ洢�ռ䲢ǿ��ת��
//��(int*)���˿ռ��ַ��������ָ�����p,һֱ���� 
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
