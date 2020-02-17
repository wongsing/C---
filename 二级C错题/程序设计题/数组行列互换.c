#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//实现行列互换,找到规律是对角线的右上部分和左下部分相互互换 
//对角线的不变 
void fun (int array[3][3])
{
	int i ,j;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			int t;
			t = array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=t;
		}
	} 
}
void main()
{
  FILE *wf;
  int i,j;
  int array [3][3]={{100,200,300},{400,500,600},{700,800,900}};
  system("CLS");
  for (i=0;i<3;i++)
     {for (j=0;j<3;j++)
          printf("%7d ",array[i][j]);
      printf("\n ");
     }
  fun(array);
  printf("Converted array:\n ");
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          printf("%7d ",array[i][j]);
       printf("\n ");
     }   
/******************************/
  wf=fopen("out.dat","w");
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          fprintf(wf,"%7d ",array[i][j]);
       fprintf(wf,"\n");
     }   
  fclose(wf);
/*****************************/
}
