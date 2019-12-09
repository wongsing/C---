#include <stdio.h>
#include <math.h>
int main (){
	int d = 300000;
	int p = 6000;
	double r = 0.01;
	double m;
	
	m=log(p/(p-d*r))/log(1+r);
	printf("%.1f\n",m);
//%.1f是取小数点后一位 
	int c1,c2;
	c1=97;
	c2=98;
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2); 
	int a,b;
	float x,y;
	char d1,d2;
	scanf("a=%db=%d",&a,&b);
//考察怎么输入 
	scanf("%f%e",&x,&y);
	scanf("%c%c",&d1,&d2);


	return 0;
}
