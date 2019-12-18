#include <stdio.h>
#include <math.h>
//迭代法求根号--->第一步要找出迭代公式 
int main()
{
	double x1 , x2 ,t;
	double a;
	scanf("%lf",&a);
	t = a/2;
do{
	x1=t;
	x2=(x1+a/x1)/2;
	t = x2;
}while(fabs(x1-x2)>=1e-5);
//绝对值小于10^-5 
	printf("%f",x2);
	return 0;
}
