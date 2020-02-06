#include <stdio.h>
//交换函数，用指针体现 
void sw(double *p1, double *p2);
int main()
{
	double x , y , *p1,*p2;
	p1=&x;
	p2=&y;	
	scanf("%lf %lf",&x,&y);
	sw(p1,p2);
	printf("x=%f,y=%f\n",x,y);
}

void sw(double *p1, double *p2)
{
	double t;
	t = *p1;
	*p1 = *p2;
	*p2 = t ;
}
