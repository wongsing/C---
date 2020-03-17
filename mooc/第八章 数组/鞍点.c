#include <stdio.h>
//寻找鞍点 

int main()

{
	int n ;                  //输入n*n的矩阵 
	scanf("%d",&n);
	int number[n][n];
	
	int i = 0;      //初始化行列下角标 
	int j = 0;
	
	for(i=0;i<n;i++){           //定义两个for循环来遍历输入                 
		for(j=0;j<n;j++){       //一行输完跳出i++继续第二行 
			scanf("%d",&number[i][j]);
		}
	}
	
	int t = 0 ;    //用来储存最小的列数j值， 
	int k,ret;     //k用于循环判断行数i的最大值 
	ret = -1;      //ret用来判断是否有鞍点 
	for(i=0,j=0;i<n;i++){       //首先从行开始找 
		for(j=0;j<n;j++){
	//先找出第一行最大的数，记录下列数	
			if(number[i][0]<number[i][j]){     
				t = j;
				}
			}
	//再比较这个数是否为这列最小 
		for(k=0;k<n;k++){	
	//如果大于任何一个数则跳出循环，i++继续上面的循环
	//如果是最小的，则让k==n跳出循环			
			if(number[i][t] > number[k][t]){
			break;
			}else;
	}
	//最后当k==n，意味着找到鞍点
	//ret的值 ！=-1  ，输出鞍点 
		if(k==n){
			printf("%d %d",i,t);
			ret = 1;
		}
	}
	//如果 无鞍点，输出NO. 
		if(ret == -1){
			printf("NO");
		}
	return 0;
}
