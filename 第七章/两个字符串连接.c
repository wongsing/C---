#include <stdio.h>
#include <string.h>
//�����ַ������� 
#define N 100
void mystrcat(char *str1,char *str2);
int main()
{
	char str0[N] ,str1[N];
	gets(str0);
	gets(str1);
	printf("str0:%s\n",str0);
	printf("str1:%s\n",str1);
	mystrcat(str0,str1);
	printf("�ϲ���Ϊ:%s\n",str0);
}

void mystrcat(char *str1,char *str2)
{
	strcat(str1,str2);
}
