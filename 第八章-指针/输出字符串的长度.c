#include <stdio.h>
//����ַ����ĳ��� 
#define N 80
int fun(char *a);
int main()
{
	char str[N],*p;
	p=str;
	printf("�������ַ���:");
	gets(str);
	printf("���ַ�������Ϊ��%d",fun(str));
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

