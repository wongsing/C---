#include  <stdio.h>
#define  N  4
//�ҳ�NxN�ľ���ÿ�е����ֵ�����ҷ���������
//ֱ��������Ԫ�غͽ��µ�Ԫ�����αȽ� 
void fun(int  (*a)[N], int  *b)  //(*a)[N]==a[][N]  ǰ����ָ�����飬Ҳ�ȼ۶�ά����(���������) 
{ int  i,j;
  for(i=0; i<N; i++) {
/**********found**********/
    b[i]=a[0][i]; //����ÿ�е���Ԫ�� 
    for(j=1; j<N; j++) //ֱ�Ӵ�ÿ�еڶ��������бȽ�  
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
  fun(x,y); //��ά��������ָ��ָ���ָ�� 
  printf("\nThe result is:");
  for(i=0; i<N; i++)  printf("%3d",y[i]);
  printf("\n");
}

