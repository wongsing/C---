#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h> 
//����1/2-1/3-1/4....-1/m�ĺ� 
double fun(int m)
{
  double t=1.0;
  int i;
  for(i=2;i<=m;i++)
/*************found**************/
      t=t-1.0/i;  //��Ϊt��double��Ҫ����ת������1.0/i�Զ�ת����double 
/*************found**************/
     return t ;
}
void main()
{int m;
 system("CLS");
 printf("\nPlease enter 1 integer numbers:\n");
 scanf("%d",&m);
 printf("\n\nThe result is %1f\n",
 fun(m));
}
