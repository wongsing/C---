#include <stdio.h>
#define N 5
//ʵ�κ��βζ��ǲ���ָ����� 
int main()
{
	void inv(int *x , int n);
	int i, arr[N] , *p = arr;
	printf("The original array:\n");
	for(i=0;i<N;i++,p++)  //��ָ��������鸳ֵ 
		scanf("%d",p);
	printf("\n");
	p=arr;    //����ٰ�ָ��pָ��arr[0] 
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
	i=x;j=x+n-1;p=x+m;   //iͬ���ؽ��յ�x�ĵ�ַ������ָ��arr[0]
						//j����ָ��arr[n-1+x]���һλ 
	for(;i<=p;i++,j--){
		temp=*i;*i=*j;*j=temp;
	}
	return;
}
