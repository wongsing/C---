#include <stdio.h>
#include <math.h>
//求数列sn
//两种方法，第二种目前调用函数失败
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

	printf("结果是%d。\n",amount);
	printf("调用函数的结果是%d\n",count(n));
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

	}
	return 0;
}
