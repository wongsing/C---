#include  <stdio.h>
#define  N  4
//找出NxN的矩阵每列的最大值，并且放入数组内
//直接用列首元素和接下的元素依次比较 
void fun(int  (*a)[N], int  *b)  //(*a)[N]==a[][N]  前者是指针数组，也等价二维数组(数组的数组) 
{ int  i,j;
  for(i=0; i<N; i++) {
/**********found**********/
    b[i]=a[0][i]; //遍历每列的首元素 
    for(j=1; j<N; j++) //直接从每列第二个数进行比较  
/**********found**********/
        if(b[i]<a[j][i])
		   b[i]=a[j][i];
  }
}
main()
{ int  x[N][N]={ {12,5,8,7},{6,1,9,3},{1,2,3,4},{2,8,4,3} },y[N],i,j;
  printf("\nThe matrix :\n");
  for(i=0;i<N; i++)
  {  for(j=0;j<N; j++) printf("%4d",x[i][j]);
     printf("\n");
  }
/**********found**********/
  fun(x,y); //二维数组名是指向指针的指针 
  printf("\nThe result is:");
  for(i=0; i<N; i++)  printf("%3d",y[i]);
  printf("\n");
}

