#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//将变量的值保留两位小数，并对第三位进行四舍五入 
double fun (float h )
{
//思路是：第一步：先乘1000然后强制转换，这样就舍掉了第三位小数之后的数
//第二步：借助‘+5 ’后再/10---> 相当于四舍五入，大于5进1，小于5舍去
//第三步：强制转换为double,整数变小数，就只剩下第二位小数了
//第四步:因第二位小数在个位，所以/100 还原 
//总结：解决小数问题先转换成整数，最后再变回小数 
    double num =  (double)(((int)(h*1000+5)/10))/100;
    return num; //return  (double)(((int)(h*1000+5)/10))/100;
}
void main()
{
  FILE *wf;
  float a;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The original data is :  ");
  printf("%f\n\n", a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
/*****************************/
}
