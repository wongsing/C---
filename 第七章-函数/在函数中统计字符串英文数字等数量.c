#include <stdio.h>
#define N 200
//�ں�����ͳ���ַ�����ĸ���ֿո������ 
void fun(char *str);
int main()
{
	char str[N];
	gets(str);
	printf("str:%s\n",str);
	fun(str);
}
void fun(char *str)
{
	int i,a=0,b=0,c=0,d=0;
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) a++;
		else if(str[i]>='0'&&str[i]<='9') b++;
		else if(str[i]==' ') c++;
		else d++;		
	}
	printf("���ַ�������ĸ��:%d\n",a);
	printf("���ַ�����������:%d\n",b);
	printf("���ַ����пո���:%d\n",c);
	printf("���ַ����������ַ���:%d\n",d);
}
