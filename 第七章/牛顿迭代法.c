#include <stdio.h>
#include <math.h>
#define N 1 //��x��1�����ĸ�
//��ţ�ٵ�������x=x-y/y'��������y!=0,��do-while
 
double fun(int a,int b,int c,int d);
int main()
{
	int a,b,c,d;
	double x2;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	x2=fun(a,b,c,d);
	printf("%.3f\n",x2);
	return 0;
}

double fun(int a,int b,int c,int d)
{
	double x=N;
	double f1,f2;
do{
	f1=a*pow(x,3)+b*pow(x,2)+c*x+d;
	f2=3*a*pow(x,2)+2*b*x+c;
	x=x-f1/f2;

}while(f1!=0);
	return x;
}
