#include <stdio.h>
//有bug明天调 
int main ()
{
	int m,n,i,j,s,k;
	scanf("%d %d",&m,&n);
	
	for(i=2;i<=m&&i<=n;i++){
	
	if((m%i==0)&&(n%i==0))
	s=i;
}	
	if(m>=n)j=m;
	else j=n;
	for(;!(j%m==0)&&(j%n==0);j++)

	printf("最大公约数为%d，最小公倍数为%d。",s,j);
	return 0;
}

 
