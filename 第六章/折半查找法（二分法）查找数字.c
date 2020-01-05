#include <stdio.h>
#define N 15
//二分法查找数字
//首先确立left/right/mid值
 
int num(int *x , int n, int k);
int main()
{
	int a[N]={40,38,35,33,31,22,18,16,15,14,13,11,10,6,2};
	int b;
	printf("请输入一个整数:");
	scanf("%d",&b);
	int key; 
	 key=num(a,N,b);
	if(key==-1){
		printf("无此数!\n");
	}else printf("该数是数组的第%d个元素的值!\n",key+1);
	return 0;
}

int num(int *x , int n, int k)   //定义一个num函数，形参是一个数组，数组元素总和，key word 
{
	int ret = -1;  //判定是否查找成功 
	int left , right , mid , i ;
	left = 0;     //左值为第一个元素 
	right =N-1;   //右值为最后一个元素 
	mid=(left+right)/2;   //中间值 
//因为数组是从大到小，所以当K>x[mid]时则需将right移至mid-1，反之则将Left移至mid+1 
	while(k!=x[mid]){     
	if(k>x[mid]){
		right=mid-1;
		mid=(left+right)/2;		
	}else if(k<x[mid]){
		left = mid+1;
		mid=(left+right)/2;
	}
//以下情况是在数组中找不到k值，令ret=0,说明无此数 
	if(left>=right){   
		ret =0;
		break;
	} 
				
	}
	if(ret==0) mid=-1;				
	return mid;
	
}
