#include <stdio.h>
//判断三角形类型首先要注意 输入正负
//还有两边之和大于第三边和两边之差小于第三边才是三角形
//输入边长时不一定是整数，找出最长最短边 
int main()
{
	float a , b, c , tmp;
	scanf("%f %f %f",&a,&b,&c);
	
	if(b > a){
		tmp = a;
		a = b;
		b = tmp;
	}	
	if(c > a){
		tmp = a;
		a = c;
		c = tmp;
	}	
	if(c >b ){
		tmp = b;
		b = c ;
		c = tmp;
	}
	
	if(c < 0 || b + c < a){
		printf("这不是一个三角形\n");
	}else if(a==b && b==c){
		printf("这是一个等边三角形\n");		
	}else if(a==b || b==c){
		printf("这是一个等腰三角形\n");
	}else printf("这是一个不等边三角形");

	return 0;
}
