#include <stdio.h>
#include <conio.h>
//将某数转换成另一进制，设某数为m,进制为k;
//首先先进行m%k，得到余数，然后再进行m/k，重复两个步骤，直至m=0；
//最后把得到的余数逆序输出 
/*************found**************/
void fun(int m,int k)
{ int aa[20], i;
  for(i=0;m;i++)
  {
	/*************found**************/
	aa[i]=m%k;
	m/=k;
  }
  for(;i;i--) //for(i=i-1;i;i--) printf("%d",aa[i]);
//i的最后一位数是不确定的值所以需要输出i-1 
	/*************found**************/
	printf("%d",aa[i-1]);
}
main()
{
  int b,n;
  printf("\nPlease enter a number and a base:\n");
  scanf("%d%d",&n,&b);
  fun(n,b);
  printf("\n ");
}
