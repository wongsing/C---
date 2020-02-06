#include <stdio.h>
//运行错误
//因为是数组，s1、s2指向的是数组的首地址，所以函数swap交换的是首字符
//答案是1bc,a23 
void swap (char *x,char *y) 
{ 
char t; t=*x; *x=*y; *y=t; 
} 
void main() 
{ 
char *s1="abc",*s2="123";
swap(s1,s2);
printf ("%s,%s\n",s1,s2);
}
