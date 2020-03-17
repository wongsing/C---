#include <stdio.h>
//密码转换成原文--->将第一个字母变成第二十六个字母
 
int main()
{
	char a[80];
	int i;
	gets(a);
	printf("密码为：%s\n",a);
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a'&&a[i]<='z'))
		{
			a[i]='z'-a[i]+'a'; //用最大值减去字母然后加上初始值就是转换的字母
								//根据ASCII码实现 
		}
		else if((a[i]>='A'&&a[i]<='Z'))
		{
			a[i]='Z'-a[i]+'A';
		}		
	} 
	printf("原文为：%s\n",a);	
	return 0;
}
