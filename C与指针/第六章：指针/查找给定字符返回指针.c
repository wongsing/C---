#include<stdio.h>
//用指针在一个字符串中搜索所有在一个给定字符集合中出现的字符
//如果source中匹配chars任何字符的第一个字符，返回这个位置的指针，若没找到就返回NULL 
char *find_char(char const *source,char const *chars);

int main()
{	
	char *s = "bc" , *c = "ddasc" , *p;
	p = find_char(s,c);
	if(p) 	printf("该字符匹配:%c",*p);
	else 	printf("所有字符不匹配!\n");
	return 0;
}

char *find_char(char const *source,char const *chars)
{
	int ret = 0;
	char const *p;
	if(source!=NULL && chars!=NULL){
	for(;*source != '\0';source++){
		for(p = chars;*p != '\0';p++){
			if(*source == *p){
				ret = 1 ;
				return source;
			}
		}
 
	}
}
	if(ret) return NULL;	
}


