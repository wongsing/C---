#include <stdio.h>
#include <math.h>
// 1�궨�ڴ����ϢΪ1.5%
// 2�궨�ڴ����ϢΪ2.1%
// 3�궨�ڴ����ϢΪ2.75%
// 5�궨�ڴ����ϢΪ3%
// ���ڴ����ϢΪ0.35%��ÿһ���Ƚ���һ�Σ� 
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
	printf("1000Ԫ��һ�δ�5������%7.2fԪ\n",five());
	printf("1000Ԫ���ȴ�2���ڣ��ٱ�Ϣ��3������%7.2fԪ\n",two());
	printf("1000Ԫ���ȴ�3���ڣ��ٱ�Ϣ��2������%7.2fԪ\n",three());
	printf("1000Ԫ����1���ڣ��ٱ�Ϣ��1����,������5����%7.2fԪ\n",one());
	printf("1000Ԫ�����궼����ڴ����%7.2fԪ\n",a());
		
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







