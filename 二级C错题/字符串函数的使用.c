#include <stdio.h>
#include <string.h>
int main()
{
	char p[20]={'a','b','c','d'},q[]="abc",r[]="abcde";
	strcat(p,r); //�ַ������Ӻ���-->p="abcdabcde"
	strcpy(p+strlen(q),q);//strlen(q)=3,p+3-->p����Ԫ����3λ, Ȼ���֮���ȫ����abc
	//����p="abcabc" 
	printf("%d\n",strlen(p));
	return 0;
} 
