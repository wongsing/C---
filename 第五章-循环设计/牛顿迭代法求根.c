#include <stdio.h>
#include <math.h>
//牛顿迭代法求根 
//迭代公式是x(n+1)=x(n)-f(n)/f(n)' 
int main()
{
	double f1 , f2 , x1 , x2 , t;
	t = 1.5;
do{
	x1 = t;
	f1 = pow(x1,3)*2-pow(x1,2)*4+3*x1-6;
	f2 = pow(x1,2)*6-8*x1+3;
	x2 = x1 - f1/f2;
	t = x2 ;
}while(fabs(x2-x1)>=1e-5);
	printf("%.3f",x2);
	return 0;
}
