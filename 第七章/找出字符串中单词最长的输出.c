#include <stdio.h>
#include <string.h>
#define N 100
//�ҳ��ַ����е��������� 
void chang(char *a,char *b);
int main()
{
	char str[N],str1[N];
	gets(str);
	chang(str,str1);
	printf("%s\n",str1);
	return 0; 
}


void chang(char *a,char *b)
{
	int i=0,j=0,t=0;
static char c[N];   //һ��Ҫ��static�ֲ���̬��������Ȼ��������� 
	for(;a[i]!='\0';i++){
	if(!(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) 
	{//��֤�Ƿ����ĸ����ַ�֤�����ʽ���������ĸ���ȸ���t����j=0���¼���һ������ 
		t=j;j=0;continue;
	}
	c[j]=a[i]; //�����ȸ���c���飬�洢��Ȼ��j++���� 
	j++;
	if(j>=t) strcpy(b,c);  //�����һ����ĸ���ȴ���ǰһ����Ȼ��ͽ�����c���Ƹ�b 
	}
} 
