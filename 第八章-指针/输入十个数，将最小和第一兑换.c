#include <stdio.h>
#define N 10
//输入十个数，将最小的和第一个数对换，最大的和最后一个数对换
//用指针 
void fun(int *a);
int main()
{
	int a[N],i;
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	fun(a);
	for(i=0;i<N;i++) printf("%d ",a[i]);	
	return 0;
}

void fun(int *a)
{
	int *p1,*p2; //用来保存最值的数值 ,就不需要变量存储下角标 
	p1=p2=a;
	int i,max,min,t;
	max=min=*a; //将初值赋给max/min 
	for(i=0;i<N;i++){
		if(a[i]> max){
			max=a[i];
			p1=&a[i]; //将最大值的地址给到p1指针 
		}
		else if(a[i]< min){
			min=a[i];
			p2=&a[i]; //将最小值的地址给到p2指针 
		}		
	}
	t=a[0],a[0]=*p2,*p2=t;  //最小值对换 
	t=a[N-1],a[N-1]=*p1,*p1=t;	//最大值对换 
}


