#include  <stdio.h>
#define   N   3
//验证NxN的矩阵是否为“幻方”-->每行每列主反对角线的元素和都相等 
int fun(int  (*a)[N])
{ int  i,j,m1,m2,row,colum,ret;
  ret = 1;//验证是否为幻方，1是，0不是 
  m1=m2=0;
  for(i=0; i<N; i++) //先验证主反对角线是否相等 
  { j=N-i-1;  m1+=a[i][i];  m2+=a[i][j];  } 
  if(m1!=m2) ret=0; 
  if(ret==1){
  for(i=0; i<N; i++) {
/**********found**********/
     row=colum= 0;
     for(j=0; j<N; j++)
     {  row+=a[i][j];  colum+=a[j][i];  } 
/**********found**********/
     if( (row!=colum) || (row!=m1) ) ret =0;
  }  //验证每行每列是否相等，然后和对角线是否相等 
/**********found**********/
  return  ret;
}
}
main()
{ int  x[N][N],i,j;
  printf("Enter number for array:\n");
  for(i=0; i<N; i++)
    for(j=0; j<N; j++)  scanf("%d",&x[i][j]);
  printf("Array:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  //返回1就是幻方，0则不是 
  if(fun(x)) printf("The Array is a magic square.\n");
  else printf("The Array isn't a magic square.\n");
}

