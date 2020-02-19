#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//求某数内的素数，把素数个数作为函数返回值，并把素数放进数组
int fun(int lim, int aa[MAX])
{
	int i,j,count=0;
	for(i=2;i<=lim;i++){
		for(j=2;j<i;j++){
			if(i%j==0)	break;
		}
		if(j>=i)	aa[count++]=i; 
 //满足的是没有进行 break的i,不需要用k值来验证，
 //若if加了k=0作为非素数，则需要再if外再加k=1作为素数!!! 
	}
	return count;
}
void main()
{
  FILE *wf;
  int limit,i,sum;
  int aa[MAX];
  system("CLS");
  printf("输入一个整数:");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  wf=fopen("out.dat","w");
  sum=fun(15,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         fprintf(wf,"\n");
      fprintf(wf,"%5d ",aa[i]);
    }
  fclose(wf);
/*****************************/
}
