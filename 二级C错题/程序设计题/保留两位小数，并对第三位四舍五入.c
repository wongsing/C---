#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//��������ֵ������λС�������Ե���λ������������ 
double fun (float h )
{
//˼·�ǣ���һ�����ȳ�1000Ȼ��ǿ��ת��������������˵���λС��֮�����
//�ڶ�����������+5 ������/10---> �൱���������룬����5��1��С��5��ȥ
//��������ǿ��ת��Ϊdouble,������С������ֻʣ�µڶ�λС����
//���Ĳ�:��ڶ�λС���ڸ�λ������/100 ��ԭ 
//�ܽ᣺���С��������ת��������������ٱ��С�� 
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
