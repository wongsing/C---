#include <stdio.h>
//递归求勒让德多项式
//公式((2*n-1)*x-fei(x,n-1)-(n-1)*fei(x,n-2))/n 
double fei(int n,int x);
int main()
{
	int n,x;
do{
	scanf("%d %d",&n,&x);
}while(n<0);

	printf("%2.1f\n",fei(x,n));
}

double fei(int x,int n)
{
	double pn;
	if(n==0) pn=1;
	else if(n==1) pn=x;
	else pn=((2*n-1)*x-fei(x,n-1)-(n-1)*fei(x,n-2))/n;
	return pn;
}
