#include <stdio.h>
#define N 2
#define M 5
void savg(double (*a)[M]);
void cavg(double (*a)[M]);
void max(double (*a)[M]);
int main()
{
	double a[N][M];
	char name[N][20],course[M][20];
	int i,j;
	for(i=0;i<N;i++) gets(name[i]);
	for(i=0;i<M;i++) gets(course[i]);	
	for(i=0;i<N;i++){
//		printf("��%s����ɼ�:",name[i]);
		for(j=0;j<M;j++){
//			printf("%s�ĳɼ�:",course[j]);
			scanf("%lf",&a[i][j]);
		}
	}
	savg(a);
	cavg(a);
	max(a);
}
void savg(double (*a)[M])
{
	double b[N];
	double sum,avg;
	int i,j;
	for(i=0;i<N;i++){
			sum=0;
		for(j=0;j<M;j++){
			sum+=a[i][j];
		}
		b[i]=sum/M;
	}
	for(i=0;i<N;i++){
		printf("��%dλͬѧ��ƽ����:",i+1);
		printf("%.2f",b[i]);
		printf("\n");		
	}		
}

void cavg(double (*a)[M])
{
	double b[M];
	double sum,avg;
	int i,j;
	for(j=0;j<M;j++){
			sum=0;
		for(i=0;i<N;i++){
			sum+=a[i][j];
		}
		b[j]=sum/N;
	}
	for(j=0;j<M;j++){
		printf("��%d�ſε�ƽ����:",j+1);
		printf("%.2f",b[j]);
		printf("\n");		
	}
}

void max(double (*a)[M])
{
	double max=0;
	int i,j,t,k;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(max<=a[i][j]){
				max=a[i][j];
				t=j;
				k=i;
			}
		}
	}
	printf("���з���������ǵ�%dλѧ���ĵ�%d�ſ�\n",k+1,t+1);
}



