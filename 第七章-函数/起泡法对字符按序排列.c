#include <stdio.h>
#define N 5
void fun(int *a);
int main()
{
	int str[N],i,cnt=0;
	for(i=0;i<N;i++) scanf("%d",&str[i]);
	fun(str);
	for(i=0;i<N;i++){
		printf("%d ",str[i]);cnt++;
		if(cnt%5==0) printf("\n");
	}
	return 0;
}

void fun(int *a)
{
	int i,j;
	int t;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
