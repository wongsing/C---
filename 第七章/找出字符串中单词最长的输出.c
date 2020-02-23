#include <stdio.h>
#include <string.h>
#define N 100
//找出字符串中单词最长的输出 
void chang(char *a,char *b);
int main()
{
	char str[N],str1[N];
	gets(str);
	chang(str,str1);
	printf("%s\n",str1);
	return 0; 
}


void chang(char *a,char *b)
{
	int i=0,j=0,t=0;
static char c[N];   //一定要加static局部静态变量，不然会出现乱码 
	for(;a[i]!='\0';i++){
	if(!(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) 
	{//验证是否除字母外的字符证明单词结束，把字母长度赋给t，让j=0重新计下一个单词 
		t=j;j=0;continue;
	}
	c[j]=a[i]; //单词先赋给c数组，存储，然后j++计数 
	j++;
	if(j>=t) strcpy(b,c);  //如果后一个字母长度大于前一个，然后就将数组c复制给b 
	}
} 
