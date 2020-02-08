#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  N  5
//求出数组周边元素的平均值
//找规律，周边元素就是行下标和列下标为0或N-1
//要考虑编程思想，从下标入手，提高运行效率 
double fun (int w[][N])  
{
 	int i,j,cnt;
 	double sum=0.0;
 	double num;
	for(i=0;i<N;i+=N-1){
		for(j=0;j<N;j++){
			sum+=w[i][j];
			cnt++;
		}
	}
	for(j=0;j<N;j+=N-1){
		for(i=1;i<N-1;i++){
			sum+=w[i][j];
			cnt++;
		}
	}
	num=sum/cnt;
	return num;
}
double fun1(int w[][N])
{
	int i , j ,cnt =0;
	double sum=0.0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==0||i==N-1||j==0||j==N-1){
				sum+=w[i][j];
				cnt++;
			}			
		}
	}
	return sum/cnt;
}
void main()
{
  FILE *wf;
  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
  int i, j;
  double s;
  system("CLS");
  printf("*****The array*****\n ");
  for (i=0; i<N; i++)
    { for (j=0;j<N;j++)
         {printf("%4d ",a[i][j]);}
      printf("\n ");
    }
  s=fun1(a);
  printf("*****THE RESULT*****\n ");
  printf("The average is : %lf\n ",s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%lf",s);
  fclose(wf);
/*****************************/
}
