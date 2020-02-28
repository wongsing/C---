#include <stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4],int n);
	float *p;
	int i , k;
	printf("enter the number of student:");
	scanf("%d",&k);
	printf("The scores of NO.%d are:\n",k);
	p=search(score,k);  //返回的是score[k][0]的地址 
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));  //最后取到这个地址的值，遍历输出 
	printf("\n");
	return 0;
}
//返回指针的函数，形参是指向一个一维数组的指针变量 
float *search(float(*pointer)[4],int n)
{
	float  *pt;
	pt = *(pointer + n);  //-->score[n][0] 
// 	pt = (*pointer + n) --->相当于是score[0][n] 
	return pt;
}
