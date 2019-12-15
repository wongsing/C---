#include <stdio.h>
#include <math.h>
//求数列sn
//两种方法
int count(int a);
int main()
{
	int i, n , sum ,amount,cnt;
	int amount2;
	printf("请输入2的位数:");
	scanf("%d",&n);
	sum=amount=0;

	for(i=1,cnt=1;cnt<=n;i*=10,cnt++){
		sum=(2*i)+sum;
		amount=amount+sum;
	}
	amount2=count(n);
	printf("结果是%d。\n",amount);
	printf("调用函数的结果是%d\n",amount2);
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
