#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N  5
//����һ��NxN���飬����������ϰ�����Ԫ���е�ֵ*mֵ(3�ַ���)
//�ҹ��ɣ��������ϰ�������Ԫ�ص����±�<=���±� 
//ǰ�����ַ������ȱ��������У���һ�������к���--->ԭ�������±�<=���±�
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
//j��i��ʼȷ�������±�<=���±� 
  	for(j=i;j<N;j++)
  		a[i][j]*=m;	
  
  return; 
}
void fun2(int a[][N], int m)
{
  int i , j;
  for(j=0;i<N;j++)
//���п�ʼ,���±�<=���±�
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
        	{a[i][j]=rand()%20; //����õ�����%20--->����Ԫ�ص�ֵΪ0~19
         	printf("%4d", a[i][j]);
        	}
        printf("\n");
    	}
  m=rand()%4; //����õ�����%20--->����m��ֵΪ0~3
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
