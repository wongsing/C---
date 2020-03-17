#include <stdio.h>
#include <math.h>
//用二分法求方程根
//分三种考虑情况，借助函数图 
//考虑左右端点值是否接近0，是的话即为根
//否的话，看是否相乘大于0 
//最后，进行二分法的判断--->利用端点值找出与中值的关系 
double f(double x);
int main()
{
	double a , b ;	 //左右端点 
//	scanf("%lf %lf"&a,&b);
	a = -10 ;
	b = 10 ;	
	if(fabs(f(a))<=(1e-5)){
		printf("x=%f\n",a);
	}else if(fabs(f(a))<=(1e-5)){
		printf("x=%f\n",b);
	}else if(f(a)*f(b)>0){
		printf("根不在这范围内\n");
	}else {
//条件为端点差值接近于0，即为根 
		while(fabs(b-a)>=(1e-5)){
		double c = (a+b)/2;
//中值看是否在x轴的上下方 
		if(f(a)*f(c)<0) b=c;
		else a=c;	
		}
		printf("x1=%.3f,x2=%.3f\n",a,b);
	}	
	return 0;
}
//定义一个函数，方程的值 
double f(double x)
{
	double ret;
	ret = pow(x,3)*2-pow(x,2)*4+3*x-6;
	return ret;	
}
