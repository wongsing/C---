#include <stdio.h>
#include <math.h>
//������sn
//���ַ���
int count(int a);
int main()
{
	int i, n , sum ,amount,cnt;
	int amount2;
	printf("������2��λ��:");
	scanf("%d",&n);
	sum=amount=0;

	for(i=1,cnt=1;cnt<=n;i*=10,cnt++){
		sum=(2*i)+sum;
		amount=amount+sum;
	}
	amount2=count(n);
	printf("�����%d��\n",amount);
	printf("���ú����Ľ����%d\n",amount2);
	return 0;
}

int count(int a)
{
	int i =1;
	int sum1,amount1;
	sum1=2;amount1=0;
	while(i<=a){
		amount1=amount1+sum1;
		sum1=sum1+2*pow(10,i);
		i++; 

	}
	return amount1;
}
