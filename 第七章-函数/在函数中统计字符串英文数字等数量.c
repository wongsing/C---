#include <stdio.h>
#define N 200
//在函数中统计字符串字母数字空格等数量 
void fun(char *str);
int main()
{
	char str[N];
	gets(str);
	printf("str:%s\n",str);
	fun(str);
}
void fun(char *str)
{
	int i,a=0,b=0,c=0,d=0;
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) a++;
		else if(str[i]>='0'&&str[i]<='9') b++;
		else if(str[i]==' ') c++;
		else d++;		
	}
	printf("该字符串中字母有:%d\n",a);
	printf("该字符串中数字有:%d\n",b);
	printf("该字符串中空格有:%d\n",c);
	printf("该字符串中其他字符有:%d\n",d);
}
