#include <stdio.h>
//求100内的所有素数--->1不是素数，2是最小素数 
int main()
{
	int a[100];
	int i,j,k;
	int ret = 1;   //辨别是否为素数 
	k = 0;         //用来输出换行 
	//遍历数组输入1~100 
	for(i=0;i<100;i++){
		a[i]=i+1;
	}
//	for(i=0,j=1;i<100;i++,j++){
//		printf("%d ",a[i]);
//		if(j%5==0) printf("\n");
//	}
	printf("输出100内的所有素数：\n");
	for(i=1;i<100;i++){
		for(j=2;j<a[i];j++){
			if(a[i]%j==0){
				ret = 0;
				break;
			}
				ret=1;
		}		
		if(ret!=0){
			printf("%5d ",a[i]);
			k++;
			if(k%5==0) printf("\n");
		}
	}

	return 0;
}
