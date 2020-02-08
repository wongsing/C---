#include <stdio.h>
#include <string.h>
int main()
{
	char p[20]={'a','b','c','d'},q[]="abc",r[]="abcde";
	strcat(p,r); //字符串连接函数-->p="abcdabcde"
	strcpy(p+strlen(q),q);//strlen(q)=3,p+3-->p从首元素移3位, 然后把之后的全换成abc
	//所以p="abcabc" 
	printf("%d\n",strlen(p));
	return 0;
} 
