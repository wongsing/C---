#include<stdio.h>
#define N 5
//输出图案，直接用二维数组，遍历输出
//第一行后的每一行空格都要加2个 
int main()
{
	char a[5][5];
	int i , j ,k;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]='*';
			printf("%c",a[i][j]);
			printf(" ");
		}
		printf("\n\n");
		for(k=1;k<=i+1;k++) printf("  ");		
	}
	return 0;
}
