#include <stdio.h>
#include <string.h>
//将一个字符串插入另一个字符串，并且按照排序 
int main()
{
char a[20]="cehiknqtw";
char *s="fbla",*p;
int i, j;
//字符指针得到s字符串的首地址，直至*p==0跳出循环 
for(p=s; *p; p++) {
   j=0;
//算出s字符串的字母在a字符串中排第几位 
   while (*p>=a[j] && a[j]!='\0') 
   j++;
//此循环时为了每插入一个字符，则数组内元素往后推一个内存 
//一直到j的位置停止，将*p的值赋值a[j]; 
   for(i=strlen(a); i>=j; i--){
      a[i+1] = a[i];
   }
   a[j]=*p;
}
printf("%s\n", a);
	return 0;
} 

