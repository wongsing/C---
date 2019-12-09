#include <stdio.h>
#include <math.h>
//求一元二次方程的解 
int main(){
	double a ,b ,c ,disc ,x1,x2,realpart,imagpart;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The equation ");
//fabs-->是一个绝对值函数
//1e-6-->10^-6,相当于一个很小很小的数
//首先判断系数a是否等于0，如果是的话，就肯定不是一元二次方程 
	if(fabs(a)<=1e-6)
		printf("is not a quadratic\n");
	else
	{
//判别式b^2-4ac 
		disc=b*b-4*a*c;
//相当于如果判别式等于0；证明有两个相同实根 
		if(fabs(disc)<=1e-6)
			printf("has two equal roots:%8.4f\n",-b/(2*a));
		else
			if(disc>1e-6)
		{
			x1=(-b+sqrt(disc))/(2*a);
			x2=(-b-sqrt(disc))/(2*a);
			printf("has distinct real roots:%8.4f and %8.4f\n",x1,x2);
		}
		else
		{
			realpart=-b/(2*a);
			imagpart=sqrt(-disc)/(2*a);   //sqrt--->是根号的函数 
			printf("has complex roots:\n");
			printf("%8.4f+%8.4fi\n",realpart,imagpart);  //realpart是复根的实部 
			printf("%8.4f+%8.4fi\n",realpart,imagpart);	 //imagpart是复根的实部 
		}
	}
	return 0;
}
