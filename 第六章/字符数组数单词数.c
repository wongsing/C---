#include <stdio.h>
#include <string.h>
//�ַ�������������
//word-->0Ϊ�ո�1Ϊ��ĸ��
//num-->�����ֿո�ʱ��������µ��� 
int main()
{
	char string[80];
	int word , num , i;
	word = 1;
	num = 1;
	i = 0;
//�����ַ������ɶ��ո�scanf���ո񼴽��� 
	gets(string);
	while(string[i]!='\0'){
		if(string[i]==' '){
			word=0;
			num++;
		}
		i++;
	}
	printf("��仰�ܹ���%d�����ʡ�\n",num);
	return 0;
}
