#include <stdio.h>
//辨别字符
//需注意数字用ASC11嘛来表示，循环输入 
//字符输入有两种方式，直接作为条件需要加（） 
int main()
{
	char c;
	int word , space , number ,other;
//word--->英文字母个数
//space--->空格个数
//number--->数字个数
//other--->其他字符个数 
	word=space=number=other=0;
	printf("请输入一行字符:");
//	c=getchar();
	while((c=getchar())!='\n'){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) word++;
		else if(c==' ') space++; 
		else if(c>='0'&&c<='9') number++;
		else other++;
//		c=getchar();
	}
	printf("其中这行字的英文字母是%d个，空格是%d个，数字是%d个，其他字符是%d个\n",word,space,number,other);
	return 0;
}
