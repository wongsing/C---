#include <stdio.h>
#include <ctype.h>
int read_int();
int main()
{
	int i = read_int();
	printf("%d\n",i);
	return 0;
} 
int read_int()
{
	int 	value;
	int		ch;
	value = 0;
	//�ӱ�׼���������������֣��õ�һ���������ַ���ֹͣ 
	while((ch=getchar()) != EOF && isdigit(ch)){
		value *= 10;
		value += ch - '0';
	}
	//�ѷ������ַ��˻ص����У��������Ͳ��ᶪʧ 
	ungetc(ch,stdin); 
	return value;
}
