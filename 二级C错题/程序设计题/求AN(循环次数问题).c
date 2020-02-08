#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
//题目：A1=1,A2=1/1+A1,A3=1/1+A2....A(N)=1/1+A(N-1)，求A(N) 
/*************found**************/
//此处错的是，返回的A是float型，所以函数返回类型也是float 
float fun(int n)
{ float A=1;int i;
/*************found**************/
//考察的是i<n? 该算出的是n-1项 而不是n项，所以需要i<=n-->结果是n项 
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
