#include <stdio.h>
#define N 100 
//将一个字符串中的元音字母复制到另一字符串
//大小写情况需要都考虑到 
void yun(char *a ,char *b);
int main()
{
	char str1[N],str2[N];
	gets(str1);
	yun(str1,str2);
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);	
	return 0;
}

void yun(char *a ,char *b)
{
	for(;*a!='\0';a++)
	{
		if(*a=='a'||*a=='o'||*a=='u'||*a=='i'||*a=='e'||
		*a=='A'||*a=='O'||*a=='U'||*a=='I'||*a=='E') (*b++)=*a;
	}
}
