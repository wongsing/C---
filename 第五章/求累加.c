#include <stdio.h>
#include <math.h>
//求累加和 
//需要注意的是选择类型，应该用double或者float
//因为第三个累加结果为小数
//注意使用double后会自动类型转换，不然得变成sum3+=1.0/k--->先人为转行类型 
int main()
{
	double sum1 , sum2 ,sum3,k,s;

	for(k=1;k<=100;k++){
		sum1+=k;
	}
	for(k=1;k<=50;k++){
		sum2+=pow(k,2);
	}
	for(k=1;k<=10;k++){
		sum3+=1/k;
	}
	s=sum1+sum2+sum3;
	printf("第一个结果为%f,第二个结果为%f,第三个结果为%f。\n",sum1,sum2,sum3);
	printf("总共加起来为%f。\n",s);
	
	return 0;
}
