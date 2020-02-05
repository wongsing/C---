#include <stdio.h>
//字符数组的输入输出不需要遍历，直接输入输出，输出是遇到'\0'自动结束
//字符数组名代表首元素地址，不需要用&！ 
int main()
{
	char s[100];
	scanf("%s",s);
	char *ps;
	ps=s;
	printf("s[]=%s",ps);
	return 0;
}
