#include <stdio.h>
//��ת�ַ���--����������ָ���������߲��������ֹͣ���Ͳ������ö�һ��len���������ƴ��� 
void reverse_string(char *string);
void reverse_string1(char *string);
int main()
{
	char a[] = "abcde";
	printf("ԭ��:%s\n",a);
	reverse_string1(a);
	printf("����:%s\n",a);
}

void reverse_string(char *string)
{
	int cnt = 0, len;
	char *p;
	p = string;
	for(;*p != '\0';p++,cnt++);
	len = cnt/2;
	while(len>0){
		char tmp;
		tmp = *string;
		*(string++) = *(--p);
		*p = tmp;
		len--;
	}
}

void reverse_string1(char *string)
{
	char *p;
	p = string;
	for(;*p != '\0';p++);
	p--;
	while(string < p){    //��stringָ�볬���������p�Ļ���ֹͣ�������ַ�����ת���� 
		char tmp;
		tmp = *string;
		*(string++) = *p;
		*p-- = tmp;
	}
}
