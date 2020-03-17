#include <stdio.h>
#include <math.h>
// 1年定期存款利息为1.5%
// 2年定期存款利息为2.1%
// 3年定期存款利息为2.75%
// 5年定期存款利息为3%
// 活期存款利息为0.35%（每一季度结算一次） 
const double oneyear = 0.015;
const double twoyear = 0.021;
const double threeyear = 0.0275;
const double fiveyear = 0.03;
const double ayear = 0.0035;
const int N = 1000;

double five();
double two();
double three();
double one();
double a();

int main()
{
	printf("1000元，一次存5年期是%7.2f元\n",five());
	printf("1000元，先存2年期，再本息存3年期是%7.2f元\n",two());
	printf("1000元，先存3年期，再本息存2年期是%7.2f元\n",three());
	printf("1000元，存1年期，再本息存1年期,连续存5次是%7.2f元\n",one());
	printf("1000元，五年都存活期存款是%7.2f元\n",a());
		
	return 0;
}

double five()
{
	
	double p = N *(1+5*fiveyear);
	return p;	
}

double two()
{
	double p = N * (1+2*twoyear);
	double q = p * (1+3*threeyear);
	return q;
}

double three()
{
	double p = N * (1+3*threeyear);
	double q = p * (1+2*twoyear);
	return q;
} 

double one()
{
	double p =pow(1+oneyear,5)*1000;
	return p;
}

double a()
{
	double p = pow(1+ayear/4,4*5)*1000;
	return p;
}







