#include <stdio.h>
#include <math.h>
//�ö��ַ��󷽳̸�
//�����ֿ����������������ͼ 
//�������Ҷ˵�ֵ�Ƿ�ӽ�0���ǵĻ���Ϊ��
//��Ļ������Ƿ���˴���0 
//��󣬽��ж��ַ����ж�--->���ö˵�ֵ�ҳ�����ֵ�Ĺ�ϵ 
double f(double x);
int main()
{
	double a , b ;	 //���Ҷ˵� 
//	scanf("%lf %lf"&a,&b);
	a = -10 ;
	b = 10 ;	
	if(fabs(f(a))<=(1e-5)){
		printf("x=%f\n",a);
	}else if(fabs(f(a))<=(1e-5)){
		printf("x=%f\n",b);
	}else if(f(a)*f(b)>0){
		printf("�������ⷶΧ��\n");
	}else {
//����Ϊ�˵��ֵ�ӽ���0����Ϊ�� 
		while(fabs(b-a)>=(1e-5)){
		double c = (a+b)/2;
//��ֵ���Ƿ���x������·� 
		if(f(a)*f(c)<0) b=c;
		else a=c;	
		}
		printf("x1=%.3f,x2=%.3f\n",a,b);
	}	
	return 0;
}
//����һ�����������̵�ֵ 
double f(double x)
{
	double ret;
	ret = pow(x,3)*2-pow(x,2)*4+3*x-6;
	return ret;	
}
