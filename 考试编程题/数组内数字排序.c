#include <stdio.h>
#define N 10
void fun(int a[],int x);
int main()
{
	int a[N]={6,5,8,1,0,4,7,3,2,9};
	int i,j,t;
	for(i=0;i<N;i++) printf("%3d",a[i]);
	printf("\n");
	fun(a,N);
//冒/起泡排序法 
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++) printf("%3d",a[i]);
	return 0;
}
//选择法---->找到最小的和左边依次比较
void fun(int a[],int x)
{
	int i , j , k , t;
	for(i=0;i<x;i++){
		k=i;
		for(j=0;j<x;j++){
			if(a[k]<a[j]){
				t=a[j];
				a[j]=a[k];
				a[k]=t;
			}
		}
	}
	for(i=0;i<N;i++) printf("%3d",a[i]);
	printf("\n");
}




