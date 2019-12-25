#include <stdio.h>
//求3X3矩阵对角线之和 
int main()
{
	int a[3][3];
	int i , j;
	int sum1,sum2;
	sum1=0;
	sum2=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);			
		}
	}
	for(i=0,j=0;i<3;i++,j++){
		sum1+=a[i][j];
	}
	printf("sum1=%d\n",sum1);
	for(i=0,j=2;j>=0;i++,j--){
		sum2+=a[i][j];
	}
	printf("sum2=%d\n",sum2);
	printf("整型矩阵对角线元素之和为:%d。\n",sum1+sum2);
	return 0;
} 
