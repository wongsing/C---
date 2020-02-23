#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 6
//十六进制转换成十进制
//先将十六进制每位转换成int数值，然后根据字节长来算16的n次方 
int swag(char *a);
int swag1(char *a);
int main()
{
	char a[N];
	scanf("%s",a);
	printf("swag:%d\n",swag(a));
	printf("swag1:%d\n",swag1(a));
}

int swag(char *a)
{
	int i,n=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9') 
		n=16*n+a[i]-'0';
		if(a[i]>='a'&&a[i]<='f')
		n=16*n+a[i]-'a'+10;
		if(a[i]>='A'&&a[i]<='F')
		n=16*n+a[i]-'A'+10;		 
	}
	return n;
}

int swag1(char *a)
{
	int i , j,t,sum=0;
	j= strlen(a);
	for(i=0;i<j;i++){
		if(a[i]>='0'&&a[i]<='9')
		t=(int)(a[i]-'0');
		if(a[i]>='a'&&a[i]<='f')
		t=(int)(a[i]-'a'+10);
		if(a[i]>='A'&&a[i]<='F')
		t=(int)(a[i]-'A'+10);
		sum+=t*pow(16,j-1-i);
	}
	return sum;
}
