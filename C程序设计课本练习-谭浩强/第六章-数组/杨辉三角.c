#include <stdio.h>
#define N 17
//�������-->�ö�ά������
//���ɾ���:a[m][n]=a[m-1][n]+a[m-1][n-1] 
//N --->�������������һ
 
int main()
{
	int a[N][N]={0};
	a[0][1]=1;
	int m , n;
	for(m=1;m<N;m++){
		for(n=1;n<=m;n++){
			a[m][n]=a[m-1][n]+a[m-1][n-1];
			printf("%-5d",a[m][n]);
		}
		printf("\n");
	}
	return 0;
}

