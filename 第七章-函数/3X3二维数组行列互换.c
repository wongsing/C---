#include <stdio.h>
#define N 3
//��ά�������л�����ע�⺯�����ö�ά������Ϊ�βεķ�ʽ 
//��ά������ÿ��������顢ָ��
//void print(int (*a)[3]);  //OK  ��ά����ת����ָ��
void swag(int b[3][3],int n);  //��ά������� int b[][3] Ҳ����  
int main()
{
	int a[N][N];
	int i , j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) scanf("%d",&a[i][j]);
	}
	swag(a,N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void swag(int b[3][3],int n)
{
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			t=b[j][i];
			b[j][i]=b[i][j];
			b[i][j]=t;
		}
	}
}


