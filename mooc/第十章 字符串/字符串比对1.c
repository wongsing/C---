#include <stdio.h>
#include <string.h>
#define N 10000 
void mystr(char *b1,const char *a1)
{
	int i;
	int cnt=0;//判断点，整个循环结束之后是否找到字符串a
	for( i=0;i<strlen(b1);i++)//外侧循环控制
	{
	  int m=i;
	  int flag=0;//判断点，判断一次循环之后在b中有a的字符串
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
    gets(a);//获得字符串a
    gets(b);//获得字符串b
    mystr(b,a);
    return 0;
}
