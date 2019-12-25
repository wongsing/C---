#include <stdio.h>
//插入一个数进入排好序的数组 
//两种方式：前-->后；后-->前 
void f(int b[] , int n);   //声明一个从后面开始做比较的函数 

int main()
{
//定义 静态局部变量！ 
static int a[7]={1,5,9,13,16,20}; 
	   int i , t;
	scanf("%d",&a[6]);	
	
	f(a,sizeof(a));  //直接调用函数，传入数组，以及数组大小 
	printf("\n");
//	printf("%d\n",sizeof(a));
	printf("\n");	
	printf("从前面开始向后比较大小:\n");
	printf("\n");
	for(i=0;i<7;i++){
		if(a[i]>a[6]){
			t = a[i];
			a[i]=a[6];
			a[6] = t;
		}
	}
	for(i=0;i<7;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

void f(int b[] , int n){
	printf("从后面开始向前比较大小:\n");
	printf("\n");	
	int i,t;
	n = n/4-1;  //数组是int型，大小除以4就是数组长度，再减去1刚好是最后一个数组元素！ 
	for(i=n;i>0;i--){
		if(b[i]<b[i-1]){
			t = b[i-1];
			b[i-1]=b[i];
			b[i]=t;
		}
	}
	for(i=0;i<=n;i++){
		printf("%d\t",b[i]);
	}

}
