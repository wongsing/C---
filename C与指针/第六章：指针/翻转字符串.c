#include <stdio.h>
//翻转字符串--可以让两个指针相遇或者擦肩而过就停止，就不用设置多一个len参数来控制次数 
void reverse_string(char *string);
void reverse_string1(char *string);
int main()
{
	char a[] = "abcde";
	printf("原序:%s\n",a);
	reverse_string1(a);
	printf("反序:%s\n",a);
}

void reverse_string(char *string)
{
	int cnt = 0, len;
	char *p;
	p = string;
	for(;*p != '\0';p++,cnt++);
	len = cnt/2;
	while(len>0){
		char tmp;
		tmp = *string;
		*(string++) = *(--p);
		*p = tmp;
		len--;
	}
}

void reverse_string1(char *string)
{
	char *p;
	p = string;
	for(;*p != '\0';p++);
	p--;
	while(string < p){    //当string指针超过或者相等p的话就停止，否则字符将翻转两次 
		char tmp;
		tmp = *string;
		*(string++) = *p;
		*p-- = tmp;
	}
}
