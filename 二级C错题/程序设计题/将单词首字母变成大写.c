#include  <stdlib.h>
#include  <string.h>
#include  <conio.h>
#include  <ctype.h>
#include  <stdio.h>
#include  <string.h>
//将句子中单词首字母变成大写 
/*************found**************/
void upfst(char *p) //调用的是数组，是数组首地址，也可p[] 
{
  int k=0;   //目的是让句子首单词首字母为大写 
  for ( ;*p;p++)
     if (k) //开始k=0进行else,之后k=1,进入if开始判断空格
	 		//若是空格，那下一步一定是进行else，变成大写字母后k=1继续判断空格
        {
         if (*p==' ')  
         	k=0;
        }
     else
        {
			if (*p!=' ')  
			{
				k=1;
				*p=toupper(*p); //将字符转化为大写字母 或者*p=*p+32 
			}
		}
}
void main()
{
	char  chrstr[81];
	system("CLS");    
	printf("\nPlease enter an English text line: ");
	gets(chrstr); 
	printf("\nBofore changing:\n  %s",chrstr);
	upfst(chrstr);
	printf("\nAfter changing:\n  %s\n",chrstr);
}
