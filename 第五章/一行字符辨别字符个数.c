#include <stdio.h>
//����ַ�
//��ע��������ASC11������ʾ��ѭ������ 
//�ַ����������ַ�ʽ��ֱ����Ϊ������Ҫ�ӣ��� 
int main()
{
	char c;
	int word , space , number ,other;
//word--->Ӣ����ĸ����
//space--->�ո����
//number--->���ָ���
//other--->�����ַ����� 
	word=space=number=other=0;
	printf("������һ���ַ�:");
//	c=getchar();
	while((c=getchar())!='\n'){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) word++;
		else if(c==' ') space++; 
		else if(c>='0'&&c<='9') number++;
		else other++;
//		c=getchar();
	}
	printf("���������ֵ�Ӣ����ĸ��%d�����ո���%d����������%d���������ַ���%d��\n",word,space,number,other);
	return 0;
}
