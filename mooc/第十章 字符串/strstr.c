#include <stdio.h>
#include <string.h>
//找字符串strstr 
int main(int argc, char const argv[]){
	char s1[] = "hello wa haoni!";
	char s2[] = "wa";
	char *p;
	p = strstr(s1,s2);
//返回s2出现在s1中后面的所有字符，包括s2本身 
	char *q=strstr(s1,s2);
//q相当于s2在s1中首次出现的地址，指向s2首次出现的位置 
	printf("%s\n",p);
	printf("%d",p-s1);
	return 0;
}
