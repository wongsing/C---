#include <stdio.h>
#include <math.h>
//�����������--->��һ��Ҫ�ҳ�������ʽ 
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
//����ֵС��10^-5 
	printf("%f",x2);
	return 0;
}
