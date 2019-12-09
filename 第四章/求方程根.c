#include <stdio.h>
#include <math.h>
//求平方根 
int main(){
	int a ;
	double b ; 
	scanf("%d",&a);
	if(a>=0&&a<=1000){
		b = sqrt(a);
		printf("%2.0f",b);
//1000以内的平方根整数部分不超两位数，所%m.nf，宽度m设为2，n小数部分舍去 
	}else printf("重新输入");

	return 0;
}
