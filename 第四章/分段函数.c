#include <stdio.h>
//简单的分段函数 
int y2(int a);
int main ()
{
	int x , y , y1;
	printf("请输入x的值：");
	scanf("%d",&x);
	y1=y2(x);
	if(x<1){
		y=x;
	}else if(x>=10){
		y=3*x-11;
	}else y=2*x-1;
	printf("x的值是%d，y的值是%d。\n",x,y);
	printf("x的值是%d，y1的值是%d。\n",x,y1);
	return 0;
}

int y2(int a)
{
	int y;
	y = a;
	if(a>=1&&a<10){
		y=2*a-1; 
	}else if(a>=10){
		y=3*a-11;
	}
	return y;
}
