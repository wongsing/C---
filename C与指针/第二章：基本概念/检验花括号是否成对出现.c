#include <stdio.h>
#define N 100
int main()
{
	char s[N];
	gets(s);
	int i , ret=0 ;
	//认为左括号是合法的 
	for(i=0;s[i]!='\0';i++){b
		if(s[i]=='{') ret+=1;
		if(s[i]=='}'){
			if(ret==0) printf("违法的右括号.\n");
			else ret-=1;
		}
	}
		if(ret>0)
		printf("%d对花括号不匹配.\n",ret);
	return 0;
}
