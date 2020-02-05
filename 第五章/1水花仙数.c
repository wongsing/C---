#include <stdio.h>
#include <math.h>
//水花仙数-->一个三位数，其各位数字的立方和等于该数本身 
//考虑三位数范围100~999
//之后对三位数分别拆开，分别立方相加，是否等于三位数本身
int number(void);
int main()
{
	int n,m;
//	scanf("%d",&n);
	n=3;
	int first=1;
	int i = 1;
	//算几位数 
	while(i<n){
		first*=10;
		i++;
	}
	i=first;
	while(i<first*10){
		int t = i;
		int sum = 0;
		do{
			int d = t%10;   //得最后一位数 
			t/=10;      //去掉最后一位数 
			int p = 1;
			int j = 0;
			while(j<n){ 
				p *=d;  //检验一个数的立方 
				j++;
			}
			sum+=p;     //最后再累加起来看是否满足相等满足水花仙数 
		}while(t>0);
		if(sum==i){
			printf("%d\n",i);
		}
		i++;		
	}
	m=number();
		return 0;	
}

int number(void)
{		int x=100,a,b,c;  
		while(x>=100&&x<1000) {
		a=0.01*x;b=10*(0.01*x-a);c=x-100*a-10*b;  
		if(x==(pow(a,3)+pow(b,3)+pow(c,3))) printf("%5d\n",x);
		x++;}  
}  
