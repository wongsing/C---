#include <stdio.h>
#include <math.h>
//���ۼӺ� 
//��Ҫע�����ѡ�����ͣ�Ӧ����double����float
//��Ϊ�������ۼӽ��ΪС��
//ע��ʹ��double����Զ�����ת������Ȼ�ñ��sum3+=1.0/k--->����Ϊת������ 
int main()
{
	double sum1 , sum2 ,sum3,k,s;

	for(k=1;k<=100;k++){
		sum1+=k;
	}
	for(k=1;k<=50;k++){
		sum2+=pow(k,2);
	}
	for(k=1;k<=10;k++){
		sum3+=1/k;
	}
	s=sum1+sum2+sum3;
	printf("��һ�����Ϊ%f,�ڶ������Ϊ%f,���������Ϊ%f��\n",sum1,sum2,sum3);
	printf("�ܹ�������Ϊ%f��\n",s);
	
	return 0;
}
