#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
//��ƽ��ֵ���Լ���������Ԫ��λ�ã���ƽ��ֵ�����ƽ��ֵǰ�棬С����ƽ��ֵ���� 
double fun(double  *x)
{ int  i, j;    double  s, av, y[N];
  s=0;
  for(i=0; i<N; i++)  s=s+x[i];
/**********found**********/
  av=s/N;  //ƽ��ֵ 
  for(i=j=0; i<N; i++)
    if( x[i]>av ){
/**********found**********/
      y[j++]=x[i]; //���ҳ�����ƽ��ֵ�ģ���Ϊ��ѭ��ֻ��i�ģ�������Ҫy[j++] 
	  x[i]=-1;} //��ƽ��ֵС��Ԫ�ر�־ 
  for(i=0; i<N; i++)
/**********found**********/
    if( x[i]!= -1) y[j++]=x[i]; //��ƽ��ֵС��Ԫ�ظ�ֵ��y���� 
  for(i=0; i<N; i++)x[i] = y[i];  //�������ظ�x[] 
  return  av;
}
main()
{ int  i;     double  x[N];
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  printf("\nThe average is: %f\n",fun(x));
  printf("\nThe result :\n",fun(x));
  for(i=0; i<N; i++)  printf("%5.0f ",x[i]);
  printf("\n");
}

