#include <stdio.h>
#define N 4
//输入数字，输出数字带空格 
void spa(int *x);
int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	spa(a);
}

void spa(int *x)
{
	int i ;
	for(i=0;i<N-1;i++){
		printf("%d ",x[i]);	
	}
		printf("%d\n",x[N-1]);
}
