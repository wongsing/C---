#include <stdio.h>
//���д���
//��Ϊ�����飬s1��s2ָ�����������׵�ַ�����Ժ���swap�����������ַ�
//����1bc,a23 
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
