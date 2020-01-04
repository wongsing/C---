#include <stdio.h>
#define N 5
//实参和形参都是采用指针变量 
int main()
{
	void inv(int *x , int n);
	int i, arr[N] , *p = arr;
	printf("The original array:\n");
	for(i=0;i<N;i++,p++)  //用指针遍历数组赋值 
		scanf("%d",p);
	printf("\n");
	p=arr;    //最后再把指针p指向arr[0] 
	inv(p,N);
	printf("The array has been inverted:\n");
	for(p=arr;p<arr+N;p++)
		printf("%5d",*p);
	printf("\n");
	return 0;
}

void inv(int *x , int n){
	int *p, m ,temp,*i,*j;
	m=(n-1)/2;
	i=x;j=x+n-1;p=x+m;   //i同样地接收到x的地址，并且指向arr[0]
						//j则是指向arr[n-1+x]最后一位 
	for(;i<=p;i++,j--){
		temp=*i;*i=*j;*j=temp;
	}
	return;
}
