#include <stdio.h>
#include <string.h>
#define N 80
//�����ַ��� 
void mystr(char *s1,char *s2,int j);
int main()
{
	int i;
	char str1[N],str2[N];
	gets(str1);
	gets(str2);
	printf("str1Ϊ��%s\n",str1); 
	printf("str2Ϊ��%s\n",str2); 
	mystr(str1,str2,strlen(str2));
	for(i=0;str2[i]!='\0';i++){
		str1[i]=str2[i];
	}
	str1[i]='\0';
	printf("���ƺ�Ľ��Ϊ��%s\n",str1); 
	return 0;
}

void mystr(char *s1,char *s2,int j)
{ 
  int i;  
  for(i=0;i<j;i++)  
    s1[i]=s2[i];  
  printf("�������õ�s1��%s\n",s1);  
}  

