#include <stdio.h>
//�������ַ�����������������strcat 
void mystr(char *a , char *b,char *c);
int main()
{
	int i,j,b;
	char str1[80],str2[80],str3[80];
	gets(str1);
	gets(str2);
	mystr(str1,str2,str3);
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);	
	for(i=0;str1[i]!='\0';i++);  //���һ���ַ�����'\0'��λ�ã�Ȼ����һ�ַ����������� 
	for(j=0;str2[j]!='\0';j++,i++){
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("a.�ַ������Ӻ�:%s\n",str1);
	printf("b.�ַ������Ӻ�:%s\n",str3);
	return 0;
}

void mystr(char *a , char *b,char *c)
{
	int i , j;
	for(i=0,j=0;a[i]!='\0';i++,j++)
		c[j]=a[i];
	for(i=0;b[i]!='\0';i++,j++)
		c[j]=b[i];
	c[j]='\0';
}
