#include <stdio.h>
//输出菱形图形
//i--->循环，j--->空格，k---->菱形
//需要找到三者之间的规律关系 j、k 与 i之间的关系 
int main()
{
	int i , j , k;
	for(i=0;i<=3;i++){
		for(j=0;j<=2-i;j++){
			printf(" ");  
		}
		for(k=0;k<=2*i;k++){
			printf("*");  
		}	printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(k=0;k<=(4-2*i);k++){
			printf("*");
		}	printf("\n");
	} 
	return 0;
	
}
