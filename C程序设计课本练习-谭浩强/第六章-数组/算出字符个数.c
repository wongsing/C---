#include <stdio.h>
#include<string.h>
//���������ֵĴ�СдӢ����ĸ�����֡��ո��������Ÿ���������
//��Ҫ�õ��ַ�������strcat���������ַ���ȫ��������
//ֱ�ӱ������ϵ��ַ�������ѡ�� 
int main()
{
	char str0[100],str1[100],str2[100],str3[100];
	int i , word1=0, word2=0, num=0, spa=0, other=0;
	gets(str1);
	gets(str2);
	gets(str3);
	strcat(str0,str1);
	strcat(str0,str2);
	strcat(str0,str3);
	for(i=0;str0[i]!='\0';i++){
		if(str0[i]>='a'&&str0[i]<='z') word1++;
		else if(str0[i]>='A'&&str0[i]<='Z') word2++;
		else if(str0[i]>='0'&&str0[i]<='9') num++;
		else if(str0[i]==' ') spa++;	
		else other++;	
	}
	printf("Сд��ĸ����%d��\n",word1);
	printf("��д��ĸ����%d��\n",word2);
	printf("���ֹ���%d��\n",num);
	printf("�ո���%d��\n",spa);
	printf("�����ַ�����%d��\n",other);
	return 0;
}
