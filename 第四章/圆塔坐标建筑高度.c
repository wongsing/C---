#include <stdio.h>
#include <math.h>
//圆塔坐标建筑高度
//需要用到圆的公式 (x-a)^2+(y-b)^2=1 --->(a,b)为圆心;
//判断半径是否在1内，若不在则是在塔外，高度为0； 
int main()
{
	int h ;
	float x1,x2,x3,x4,y1,y2,y3,y4,x,y,d1,d2,d3,d4;
//四个圆塔的圆心坐标	
	scanf("%f %f",&x,&y);
	x1 = 2 , y1 = 2;
	x2 = -2 , y2 = 2;
	x3 = 2 , y3 = -2;
	x4 = -2 , y4 = -2;
//pow()--->平方函数	
	d1=pow(x-x1,2)+pow(y-y1,2);
	d2=pow(x-x2,2)+pow(y-y2,2);
	d3=pow(x-x3,2)+pow(y-y3,2);
	d1=pow(x-x4,2)+pow(y-y4,2);
	
//	if(d1>1&&d2>1&&d3>1&&d4>1) h=0;
	
	(d1<=1||d2<=1||d3<=1||d4<=1) ? (h=10): (h=0);
	 
	printf("该点的建筑高度为%d",h);
	return 0;
}
