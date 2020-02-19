#include <stdio.h>
#include <math.h>
//求方程 ax^2+bx+c=0的根，用K的三种情况设置三个函数
//复根就加个符号变成正的，输出的时候加个i！ 
void two(double a ,double b ,double k);
void one(double a ,double b);
void fu(double a ,double b,double k);
int main()
{
	double x,a,b,c,k;
	printf("请输入方程：ax^2+bx+c=0的系数:");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);
	k=(b*b-4*a*c);
	if(a==0) printf("该方程的解为：%.2f\n",((-c)/b));
	else{
	if(k>0) two(a,b,c);
	else if(k==0) one(a,b);
	else fu(a,b,k);
}
}

void two(double a ,double b ,double k)
{
	double x1 ,x2;
	x1 = (-b+sqrt(k))/(2*a);
	x2 = (-b-sqrt(k))/(2*a);
	printf("该方程的解为：%.2f、%.2f\n",x1,x2);
}

void one(double a ,double b)
{
	double x;
	x = -b/(2*a);
	printf("该方程的解为：%.2f\n",x);
}

void fu(double a ,double b,double k)
{
	double x1 ,x2;
	x1 = (-b+sqrt(-k))/(2*a);
	x2 = (-b-sqrt(-k))/(2*a);
	printf("该方程的解为：%.2fi、%.2fi\n",x1,x2);		
}

