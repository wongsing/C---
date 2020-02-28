#include <stdio.h>
#include <string.h>
//字符数组数单词数
//word-->0为空格，1为字母，
//num-->当出现空格时，则出现新单词 
int main()
{
	char string[80];
	int word , num , i;
	word = 1;
	num = 1;
	i = 0;
//输入字符串，可读空格，scanf读空格即结束 
	gets(string);
	while(string[i]!='\0'){
		if(string[i]==' '){
			word=0;
			num++;
		}
		i++;
	}
	printf("这句话总共有%d个单词。\n",num);
	return 0;
}
