#include <stdio.h>
//译密码1
//输入的字母，加4变成密码输出，非字母则保持不变
//根据ASC11码来判断 
int main()
{
	char c;
	c=getchar();
	while(c!='\n'){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			if(c>='w'&&c<='z'||c>='W'&&c<='Z') c= c-22;
		else c = c+4;
		}printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
}
