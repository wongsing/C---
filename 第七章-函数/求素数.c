#include <stdio.h>
//������ 
int prime(int x);
int main()
{
	int i,j;
	printf("������һ��������");
	scanf("%d",&i);
	j=prime(i);
	if(j==1) printf("%d������!\n",i);
	else	 printf("%d��������!\n",i);
	return 0;
}

int prime(int x)
{
	int ret = 1;
	int i;
	if(x==1) ret=0;
	for(i=2;i<x;i++){
		if(x%i==0) ret=0; //break Ч�ʸ��� 
	}	
	return ret;	
}
