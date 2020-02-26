#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h> 
//计算1/2-1/3-1/4....-1/m的和 
double fun(int m)
{
  double t=1.0;
  int i;
  for(i=2;i<=m;i++)
/*************found**************/
      t=t-1.0/i;  //因为t是double，要类型转换，用1.0/i自动转换成double 
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
