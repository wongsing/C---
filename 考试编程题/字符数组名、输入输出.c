#include <stdio.h>
//�ַ�����������������Ҫ������ֱ��������������������'\0'�Զ�����
//�ַ�������������Ԫ�ص�ַ������Ҫ��&�� 
int main()
{
	char s[100];
	scanf("%s",s);
	char *ps;
	ps=s;
	printf("s[]=%s",ps);
	return 0;
}
