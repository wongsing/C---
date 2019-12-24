#include <stdio.h>
//选择法整数排序
//需要逐次找出最小值，然后和最左边a[0]替换，之后再进行a[1]~a[9]与a[1]比较... 
int main()
{
	int i , j , t ,k;
	int n = 5;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		k=i;
	for(j=i+1;j<n;j++) 	//找出一行中最小的
		if(a[k]>a[j]){
			k=j;	
		}

			t=a[k];   //储存最小值 
			a[k]=a[i]; //将最左边的值与最小值调换位置 
			a[i]=t;   //将最小值赋给最左边 
	}
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
