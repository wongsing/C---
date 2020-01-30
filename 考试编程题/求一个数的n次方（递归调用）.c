#include <stdio.h>
//编写程序，用函数的递归调用求 x 的 n次方的值，其中n为正整数
float myfun(float a , int b );
int main()
{
	float x;
	int n;
	scanf("%f %d",&x,&n);
	printf("%f的%d次方等于%f\n",x,n,myfun(x,n));
	return 0;
} 

float myfun(float a , int b )
{
	float m;
	if(b==1) m = a;
	else m=a*myfun(a,b-1);
	return m; 
}
