#include <stdio.h>
#include <string.h>
#define N 10000 
void mystr(char *b1,const char *a1)
{
	int i;
	int cnt=0;//�жϵ㣬����ѭ������֮���Ƿ��ҵ��ַ���a
	for( i=0;i<strlen(b1);i++)//���ѭ������
	{
	  int m=i;
	  int flag=0;//�жϵ㣬�ж�һ��ѭ��֮����b����a���ַ���
	  int j;
	  for(j=0;j<strlen(a1);j++)
	  {
	    if(a1[j]!=b1[m])
	    {
	      flag=1;
	      break;
	    }
	     m++;
	  }
	  if(flag==0)
	  {
		printf("%d ",i);
		cnt=1;
	  }
	} 
	if(cnt==0)
	{
		printf("-1");
	}
}
int main()
{
    char a[N] = "", b[N] = "";
    gets(a);//����ַ���a
    gets(b);//����ַ���b
    mystr(b,a);
    return 0;
}
