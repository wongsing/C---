#include <stdio.h>
#define N 5

int main()
{
	int a [N];
	int i , j ,t;
	printf("enter %d nubers:",N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i;j++){
			if(a[j]>a[j+1]){
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0;i<N;i++) printf("%3d",a[i]);
}
