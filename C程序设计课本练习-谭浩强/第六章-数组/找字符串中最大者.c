#include <stdio.h>
#include <string.h>
//找字符串最大者
//字符串二维数组，行需要循环输入
//设立一个最大值string
//利用strcmp逐一比较，然后用strcpy将最大值赋给string 
int main()
{
	char str[3][20];
	char string[20];
	int i;
	for(i=0;i<=2;i++){
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0)
		strcpy(string,str[0]);
	else
		strcpy(string,str[1]);
	if(strcmp(str[2],string)>0)
		strcpy(string,str[2]);
	printf("\nthe largest string is :\n%s\n",string);
   	return 0;
}
