#include <stdio.h>
//求最大公约数、最小公倍数
//运用数学思维：最大公约数，能同时整除；
//最小公倍数，能够被同时整除；
 
int main ()
{
	int m,n,i,j,s,k;
	scanf("%d %d",&m,&n);
//求最大公约数
//另一种方法是辗转相除法	
	for(i=1;i<=m&&i<=n;i++){	 
	if((m%i==0)&&(n%i==0))
	s=i;
}	
//求最小公倍数 --->用最大值开始除 
	if(m>=n)j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j++);

	printf("最大公约数为%d，最小公倍数为%d。",s,j);
	return 0;
}

 
