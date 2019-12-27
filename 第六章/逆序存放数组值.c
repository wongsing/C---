#include <stdio.h>
//逆序存放数组值
//关键循环次数，头尾分别对调，所以就是数组长度/2，前提是需要正序数组 
#define N  5
int main()
{
	int a[N]={8,6,5,4,1};
	int i ,j , t ;
	printf("数组原来存放为:");
	for(i=0;i<N;i++) printf("%5d",a[i]);
	printf("\n");
	for(i=0,j=N-1;i<N/2;i++,j--){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
//		printf("a[%d]=%d,a[%d]=%d",i,a[i],j,a[j]);
	}
	printf("数组逆序存放为:");
	for(i=0;i<5;i++) printf("%5d",a[i]);
	printf("\n");
	return 0;
}
