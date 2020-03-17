#include <stdio.h>
#define N 3
//二维数组行列互换，注意函数调用二维数组作为形参的方式 
//二维数组调用可以用数组、指针
//void print(int (*a)[3]);  //OK  二维数组转数组指针
void swag(int b[3][3],int n);  //二维数组调用 int b[][3] 也可以  
int main()
{
	int a[N][N];
	int i , j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) scanf("%d",&a[i][j]);
	}
	swag(a,N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void swag(int b[3][3],int n)
{
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			t=b[j][i];
			b[j][i]=b[i][j];
			b[i][j]=t;
		}
	}
}


