#include <stdio.h>
//��bug����� 
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

	printf("���Լ��Ϊ%d����С������Ϊ%d��",s,j);
	return 0;
}

 
