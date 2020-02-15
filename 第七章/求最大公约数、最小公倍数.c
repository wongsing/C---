#include <stdio.h>
int minnum(int *x , int *y); //求最小公倍数 
int maxnum1(int *x, int *y); //求最大公约数 
int maxnum1(int *x, int *y); //辗转相除法 
int main()
{
	int x, y;
	scanf("%d %d",&x,&y);
	printf("%d和%d的最大公约数为%d\n",x,y,maxnum1(&x,&y));
	printf("%d和%d的最大公约数为%d\n",x,y,maxnum2(x,y));
	printf("%d和%d的最小公倍数为%d\n",x,y,minnum(&x,&y));
	return 0;
}

int minnum(int *x , int *y)
{
	int i;
	for(i=1;i%*x!=0||i%*y!=0;i++)
	if (i%*x==0&&i%*y==0) break;
	return i;	
}

int maxnum1(int *x, int *y)
{
	int i;
	if(*x>*y) i=*x;
	else i=*y;
	for(;*x%i!=0||*y%i!=0;i--);
	return i;
}

int maxnum2(int x, int y)
{
	int i;
do{	
	i = x % y;
	x = y ;
	y = i;
	}while(i>0);
	return x;
}

