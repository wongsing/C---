#include  <stdio.h>
#define   N   3
//��֤NxN�ľ����Ƿ�Ϊ���÷���-->ÿ��ÿ�������Խ��ߵ�Ԫ�غͶ���� 
int fun(int  (*a)[N])
{ int  i,j,m1,m2,row,colum,ret;
  ret = 1;//��֤�Ƿ�Ϊ�÷���1�ǣ�0���� 
  m1=m2=0;
  for(i=0; i<N; i++) //����֤�����Խ����Ƿ���� 
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
  }  //��֤ÿ��ÿ���Ƿ���ȣ�Ȼ��ͶԽ����Ƿ���� 
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
  //����1���ǻ÷���0���� 
  if(fun(x)) printf("The Array is a magic square.\n");
  else printf("The Array isn't a magic square.\n");
}

