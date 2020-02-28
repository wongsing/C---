#include <stdio.h>
#include <math.h>

int main()
{
	int p , r , n ;
	r = 7;
//r为年增长率，n为年数，p为与现在相比的倍数 
	scanf("%d",&n);
	p = pow (1+r,n);
//公式：p = （1+r）^n 
	printf("%d",p);
	return 0 ;
}
