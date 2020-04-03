#include <stdio.h>
//利用近似值求平方根,当前后近似值相等时，平方根就算出来了 
//输入的数字必须是浮点型，因为公式需要除法 
int main()
{
	double a1 = 1 , a2 , a3 , a4 ,n;
	printf("请输入一个正数:");
	scanf("%lf",&n);
	if(n>0){
do{	
	a2 = a1;	
	a1 = (a2+n/a2)/2;
	printf("%f\n",a1);	
}while(a2!=a1);	
	printf("%f的平方根是%f\n",n,a1);	
	}
	else printf("该值是负值\n");
	return 0;
}



