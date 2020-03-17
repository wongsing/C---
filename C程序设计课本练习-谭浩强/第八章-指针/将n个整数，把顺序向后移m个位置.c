#include <stdio.h>
#define N 10
//将n个整数，按前面顺序往后移m个位置 
void fun(int *a,int m);
int main()
{
	int i,a[N],m;
	printf("请输入%d个整数：",N);
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	printf("请输入需要后移的位置：");
	scanf("%d",&m);
	fun(a,m);
	for(i=0;i<N;i++) printf("%d ",a[i]);
	return 0;
}

void fun(int *a,int m)
{
	int *p,i,t;
	p=a;
	for(i=0;i<m;i++){
		t=*p;
		*p=*(p+N-m);
		*(p+N-m)=t;
		p++;
	}
}
