#include <stdio.h>
#include <math.h>
//�󷽳� ax^2+bx+c=0�ĸ�����K���������������������
//�����ͼӸ����ű�����ģ������ʱ��Ӹ�i�� 
void two(double a ,double b ,double k);
void one(double a ,double b);
void fu(double a ,double b,double k);
int main()
{
	double x,a,b,c,k;
	printf("�����뷽�̣�ax^2+bx+c=0��ϵ��:");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);
	k=(b*b-4*a*c);
	if(a==0) printf("�÷��̵Ľ�Ϊ��%.2f\n",((-c)/b));
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
	printf("�÷��̵Ľ�Ϊ��%.2f��%.2f\n",x1,x2);
}

void one(double a ,double b)
{
	double x;
	x = -b/(2*a);
	printf("�÷��̵Ľ�Ϊ��%.2f\n",x);
}

void fu(double a ,double b,double k)
{
	double x1 ,x2;
	x1 = (-b+sqrt(-k))/(2*a);
	x2 = (-b-sqrt(-k))/(2*a);
	printf("�÷��̵Ľ�Ϊ��%.2fi��%.2fi\n",x1,x2);		
}

