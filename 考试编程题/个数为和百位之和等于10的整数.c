#include<stdio.h>
//所有个位数和百位数之和为10的三位数整数
int main()
{	
	int i , m , n ,sum ,cnt = 0;
	for(i=100;i<1000;i++){
		m = i % 10;
		n = i / 100;
		sum = m + n ;
		if(sum == 10){
			printf("%d\t",i);
			cnt++;
			if(cnt %5 == 0)
				printf("\n");
		}
	}
	return 0;
}
