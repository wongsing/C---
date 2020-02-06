#include <stdio.h>
//·Ö¶Îº¯Êý 
int num(int x);
int main()
{
	int x , y;
	scanf("%d",&x);
	printf("x=%d,y=%d\n",x,num(x));
}

int num(int x)
{
	int y;
	if(x<5) y=x;
	else if(x>=5&&x<10) y=2*x-5;
	else y=4*x-25;
	return y; 
}
