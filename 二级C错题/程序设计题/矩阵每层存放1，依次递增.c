#include  <stdio.h>
#define   N   7
//һ��NxN�ľ�����Ҫÿ����1�����ε���
//������Ҫ�����Ҫ��ż�������
//Ȼ����п�ʼ������ֵ���ٵ��б�����ֵ 
/**********found**********/
void fun(int (*a)[N])
{ int  i,j,k,m; //m��ʾ���ǲ��� ��NΪ������������1 
  if(N%2==0) m=N/2 ; 
  else       m=N/2+1;
  for(i=0; i<m; i++) {  
/**********found**********/
     for(j=i; j<N-i; j++)  //��������У���һ�к����һ�� 
        a[i][j]=a[N-i-1][j]=i+1;
     for(k=i+1; k<N-i; k++) //��������У���ȥ���һ�У������Ǵ�i+1 
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

