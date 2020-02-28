#include <stdio.h>
#include <math.h>
//求一个数是否为素数 
int prime(int a);
int main()
{
	int num,num1;
	scanf("%d",&num);
	int i,ture;
	ture = 1;
//只需被2~根号n个整数除 
	num1=prime(num);
//需要2~n-1个整数除 
	for(i=2;i<num;i++){
		if(num%i==0){
			ture=0;
			break;
		}
	}
	if(ture==0)printf("1.不是素数\n");
	else printf("1.是素数\n");	

	return 0;
}

int prime(int a)
{
	int k ;
	k=sqrt(a);
//根号取整 
	int i;
	for(i=2;i<=k;i++)
		if(a%i==0)break;
	if(i<k)printf("2.这不是素数\n");
	else printf("2.这是素数\n");
	
	return 0;
}
