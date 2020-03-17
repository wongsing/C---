#include <stdio.h>
#include <string.h>
#define N 100 
//字符串反序排列,要用到字符串复制函数strcpy
//然后需要用strlen算出字符串长度 ，因为数组是0起计，所以最后一个元素要减1
//拷贝完后倒序遍历赋值 
void str2(char *str);
int main()
{
	char str1[N];
	gets(str1);
	printf("原序字符串为：%s\n",str1);
	str2(str1);
	printf("反序字符串为：%s\n",str1);	
	return 0;	
}

void str2(char *str)
{
	char str0[N];
	strcpy(str0,str);
	int t =strlen(str0)-1,i;
//	printf("1反序字符串为：%s\n",str0);
	for(i=0;t>=0;i++,t--){
		str[i]=str0[t];
	}
	str[i]='\0';
//	printf("2反序字符串为：%s\n",str);
}


