#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N  5
//定义一个NxN数组，求出数组右上半三角元素中的值*m值(3种方法)
//找规律，数组右上半三角中元素的行下标<=列下标 
//前面两种方法是先遍历行再列，后一种是先列后行--->原则都是行下标<=列下标
void fun(int a[][N], int m)
{
  int i , j;
  for(i=0;i<N;i++){
  	for(j=0;j<N;j++){
  		if(i<=j) a[i][j]*=m;
  	}
  }
  return; 
}
void fun1(int a[][N], int m)
{
  int i , j;
  for(i=0;i<N;i++)
//j从i开始确保了行下标<=列下标 
  	for(j=i;j<N;j++)
  		a[i][j]*=m;	
  
  return; 
}
void fun2(int a[][N], int m)
{
  int i , j;
  for(j=0;i<N;j++)
//从列开始,行下标<=列下标
  	for(i=0;i<=j;i++)
  		a[i][j]*=m;	 
  return; 
}
main()
{ 
  int a[N][N],m, i, j;
  FILE *out;
  printf("*****The array*****\n");
  for(i=0;i<N;i++)
        { for(j=0;j<N;j++)
        	{a[i][j]=rand()%20; //任意得到数字%20--->数组元素的值为0~19
         	printf("%4d", a[i][j]);
        	}
        printf("\n");
    	}
  m=rand()%4; //任意得到数字%20--->倍数m的值为0~3
  printf("m=%4d\n",m);
  fun(a,m);
  printf("THE RESULT\n"); 
  for(i=0;i<N;i++)
     { for(j=0;j<N;j++) 
          printf("%4d",a[i][j]);
       printf("\n");
     }
  /******************************/
  out=fopen("out.dat","w");
  for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
		a[i][j]=i*j;
  fun(a,8);
  for(i=0;i<N;i++)
  { 	for(j=0;j<N;j++)
		fprintf(out,"%4d",a[i][j]);
	fprintf(out,"\n");
  }
  fclose(out);
  /******************************/
}
