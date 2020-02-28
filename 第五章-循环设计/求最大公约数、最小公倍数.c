#include <stdio.h>
//求最大公约数、最小公倍数
//运用数学思维：最大公约数，能同时整除；
//最小公倍数，能够被同时整除；
int num(int a , int b);
int main ()
{
	int m,n,i,j,s,k,c;
	scanf("%d %d",&m,&n);
//求最大公约数
	
	for(i=1;i<=m&&i<=n;i++){	 
	if((m%i==0)&&(n%i==0))
	s=i;
}	
//另一种方法是辗转相除法
	c = num (m,n);
//求最小公倍数 --->用最大值开始除 
	if(m>=n)j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j++);

	printf("最大公约数为%d，最小公倍数为%d。\n",s,j);
	printf("最大公约数为%d，最小公倍数为%d。\n",c,j);
	return 0;
}

int num(int a , int b)
{
	int t;
	while(b!=0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;	
}
