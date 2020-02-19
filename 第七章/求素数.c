#include <stdio.h>
//求素数 
int prime(int x);
int main()
{
	int i,j;
	printf("请输入一个整数：");
	scanf("%d",&i);
	j=prime(i);
	if(j==1) printf("%d是素数!\n",i);
	else	 printf("%d不是素数!\n",i);
	return 0;
}

int prime(int x)
{
	int ret = 1;
	int i;
	if(x==1) ret=0;
	for(i=2;i<x;i++){
		if(x%i==0) ret=0; //break 效率更快 
	}	
	return ret;	
}
