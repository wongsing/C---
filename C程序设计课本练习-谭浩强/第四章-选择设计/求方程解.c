#include <stdio.h>
#include <math.h>
//��һԪ���η��̵Ľ� 
int main(){
	double a ,b ,c ,disc ,x1,x2,realpart,imagpart;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The equation ");
//fabs-->��һ������ֵ����
//1e-6-->10^-6,�൱��һ����С��С����
//�����ж�ϵ��a�Ƿ����0������ǵĻ����Ϳ϶�����һԪ���η��� 
	if(fabs(a)<=1e-6)
		printf("is not a quadratic\n");
	else
	{
//�б�ʽb^2-4ac 
		disc=b*b-4*a*c;
//�൱������б�ʽ����0��֤����������ͬʵ�� 
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
			imagpart=sqrt(-disc)/(2*a);   //sqrt--->�Ǹ��ŵĺ��� 
			printf("has complex roots:\n");
			printf("%8.4f+%8.4fi\n",realpart,imagpart);  //realpart�Ǹ�����ʵ�� 
			printf("%8.4f+%8.4fi\n",realpart,imagpart);	 //imagpart�Ǹ�����ʵ�� 
		}
	}
	return 0;
}
