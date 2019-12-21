#include <stdio.h>
//3X4矩阵找最大值
//row-->行 ;column-->列; 
int main()
{
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	int i , j ,column , row;
	int max =0;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			if(a[i][j]>=max){
				max=a[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("The max is %d.\n",max);
	printf("The row is %d.\n",row);
	printf("The column is %d.\n",column);
	return 0;
	
}
