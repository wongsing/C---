#include <stdio.h>
//只统计'\'之前的数字字符 
int main()
{	
	char s[]="012xy\08s34f4w2";
	int i , n=0;
	for(i=0;s[i]!=0;i++)  //判断条件是遇到'\'字符结束 
		if(s[i]>='0'&&s[i]<='9')  n++;
	printf("%d\n",n);
	return 0;
}

