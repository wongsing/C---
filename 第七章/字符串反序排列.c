#include <stdio.h>
#include <string.h>
#define N 100 
//�ַ�����������,Ҫ�õ��ַ������ƺ���strcpy
//Ȼ����Ҫ��strlen����ַ������� ����Ϊ������0��ƣ��������һ��Ԫ��Ҫ��1
//��������������ֵ 
void str2(char *str);
int main()
{
	char str1[N];
	gets(str1);
	printf("ԭ���ַ���Ϊ��%s\n",str1);
	str2(str1);
	printf("�����ַ���Ϊ��%s\n",str1);	
	return 0;	
}

void str2(char *str)
{
	char str0[N];
	strcpy(str0,str);
	int t =strlen(str0)-1,i;
//	printf("1�����ַ���Ϊ��%s\n",str0);
	for(i=0;t>=0;i++,t--){
		str[i]=str0[t];
	}
	str[i]='\0';
//	printf("2�����ַ���Ϊ��%s\n",str);
}


