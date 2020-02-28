#include <stdio.h>
//斐波那契数列
//重点是看清f1/f2/f3关系 
//输出前四十个数 

int rabit(int f1,int f2);
int main()
{
	int f1 , f2 , f3 , cnt ;
	int way2;
	f1 = 1;
	f2 = 1;
	way2=rabit(f1,f2);	
	printf("%d\n",f1);
	printf("%d\n",f2);
	
	for(cnt=0;cnt<38;cnt++){
		f3 = f1 + f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;
	}
	
	return 0;
}
//每次算出两个月，循环次数减半，效率提高 
int rabit(int f1,int f2)
{
	int i ;
	for(i=1;i<=20;i++){
		printf("%12d %12d",f1,f2);
		if(i%2==0)printf("\n");
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}
