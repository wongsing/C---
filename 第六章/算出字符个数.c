#include <stdio.h>
#include<string.h>
//将三行文字的大小写英文字母、数字、空格其他符号个数数出来
//需要用到字符串连接strcat，把三个字符串全部练起来
//直接遍历整合的字符串进行选择 
int main()
{
	char str0[100],str1[100],str2[100],str3[100];
	int i , word1=0, word2=0, num=0, spa=0, other=0;
	gets(str1);
	gets(str2);
	gets(str3);
	strcat(str0,str1);
	strcat(str0,str2);
	strcat(str0,str3);
	for(i=0;str0[i]!='\0';i++){
		if(str0[i]>='a'&&str0[i]<='z') word1++;
		else if(str0[i]>='A'&&str0[i]<='Z') word2++;
		else if(str0[i]>='0'&&str0[i]<='9') num++;
		else if(str0[i]==' ') spa++;	
		else other++;	
	}
	printf("小写字母共有%d个\n",word1);
	printf("大写字母共有%d个\n",word2);
	printf("数字共有%d个\n",num);
	printf("空格共有%d个\n",spa);
	printf("其他字符共有%d个\n",other);
	return 0;
}
