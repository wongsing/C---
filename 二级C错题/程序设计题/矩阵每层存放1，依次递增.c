#include  <stdio.h>
#define   N   7
//一个NxN的矩阵，需要每层存放1，依次递增
//首先先要算出需要存放几层数字
//然后从行开始遍历赋值，再到列遍历赋值 
/**********found**********/
void fun(int (*a)[N])
{ int  i,j,k,m; //m表示的是层数 ，N为奇数，层数加1 
  if(N%2==0) m=N/2 ; 
  else       m=N/2+1;
  for(i=0; i<m; i++) {  
/**********found**********/
     for(j=i; j<N-i; j++)  //处理的是行，第一行和最后一行 
        a[i][j]=a[N-i-1][j]=i+1;
     for(k=i+1; k<N-i; k++) //处理的是列，除去最后一行，所有是从i+1 
/**********found**********/
        a[k][i]=a[k][N-i-1]=i+1;
  }
}
main()
{ int  x[N][N]={0},i,j;
  fun(x);
  printf("\nThe result is:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
}

