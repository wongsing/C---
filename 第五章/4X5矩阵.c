#include <stdio.h>
//输出矩阵
//主要了解continue/break 区别
//continue 是结束本次循环，进行下一次循环；
//break 则是跳出循环; 
int main (){
	int i,j;
	for(i=1;i<5;i++){
		for(j=1;j<=5;j++){

			if(i==3&&j==1)continue;
//			if(i==3&&j==1)break;
			printf("%d\t",i*j);

		}
		printf("\n");
	}
	return 0;
}
