#include <stdio.h>
//译密码1
//输入的字母，加4变成密码输出，非字母则保持不变
//根据ASC11码来判断 
int main(){
	char c;
	while((c=getchar())!='\n'){
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
			c=c+4;
			if(c>'z'||c>'Z'&&c<('Z'+4))
			c = c-26;
		}
		printf("%c",c);
	}
	printf("\n");
	return 0;
}
