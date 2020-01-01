#include <stdio.h>
//寻找鞍点-->本行最大，本列最小
 
int main ()
{
	int n , i ,j ,a;
	scanf("%d",&n);
	int b[n][n];
//遍历输入数组元素 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
//遍历输入数组元素--->for test 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d",b[i][j]);
		}
			printf("\n");		
	}
	printf("\n");
		int ret = 0;   //用来判别是否为鞍点 
		int maxj = 0 ;  //用来保存符合鞍点的列数 
	for(a=0;a<n;a++){ 
	//始终以第一行为检验，是因为已有行内最大的数，让程序能够继续检查是否为该列最小数 
		for(i=0,j=1;j<n;j++){        //先找出第一行最大的数 
			if(b[i][j]>b[a][maxj]){
				maxj=j;    //将列数标记下来 
			}
	}   //再进行检查是否为该列最小数 ，若不是则跳出循环 
		for(i=0;i<n;i++){   
			if(b[i][maxj]<b[a][maxj]) break;						
		}
		if(i==n){   //若没跳出循环，则是鞍点 
			printf("鞍点为%d,(%d,%d)\n",b[a][maxj],a,maxj);
			ret = 1;
		}
		}
	if(ret==0) printf("没有鞍点\n");
	return 0;
}
