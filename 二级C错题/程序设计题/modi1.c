#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
//��Ŀ��A1=1,A2=1/1+A1,A3=1/1+A2....A(N)=1/1+A(N-1)����A(N) 
/*************found**************/
//�˴�����ǣ����ص�A��float�ͣ����Ժ�����������Ҳ��float 
float fun(int n)
{ float A=1;int i;
/*************found**************/
//�������i<n? ���������n-1�� ������n�������Ҫi<=n-->�����n�� 
  for(i=2;i<=n;i++)
     A=1.0/(1+A);
  return A;
}
void main()
{ int n;
  system("CLS");
  printf("\nPlease enter n: ");
  scanf("%d",&n);
  printf("A%d=%lf\n",n,fun(n));
}
