#include <stdio.h>
#include <math.h>
//Բ�����꽨���߶�
//��Ҫ�õ�Բ�Ĺ�ʽ (x-a)^2+(y-b)^2=1 --->(a,b)ΪԲ��;
//�жϰ뾶�Ƿ���1�ڣ����������������⣬�߶�Ϊ0�� 
int main()
{
	int h ;
	float x1,x2,x3,x4,y1,y2,y3,y4,x,y,d1,d2,d3,d4;
//�ĸ�Բ����Բ������	
	scanf("%f %f",&x,&y);
	x1 = 2 , y1 = 2;
	x2 = -2 , y2 = 2;
	x3 = 2 , y3 = -2;
	x4 = -2 , y4 = -2;
//pow()--->ƽ������	
	d1=pow(x-x1,2)+pow(y-y1,2);
	d2=pow(x-x2,2)+pow(y-y2,2);
	d3=pow(x-x3,2)+pow(y-y3,2);
	d1=pow(x-x4,2)+pow(y-y4,2);
	
//	if(d1>1&&d2>1&&d3>1&&d4>1) h=0;
	
	(d1<=1||d2<=1||d3<=1||d4<=1) ? (h=10): (h=0);
	 
	printf("�õ�Ľ����߶�Ϊ%d",h);
	return 0;
}
