#include <stdio.h>
char *a="you",b[]="welcome#you#to#China!";
//找出a字符串之后的字符串 
main()
{
	int i,j=0;
	char *p;
	for(i=0;b[i]!='\0';i++)
	{
		if(*a==b[i]){
			p=&b[i]; //得到b[8]地址就是与字符y的地址 
			for(j=0;a[j]!='\0';j++){
				if(a[j]!=*p) break;
				p++; //p一直移到you之后 
			}
		if(a[j]=='\0') break;			
		}
	}
	printf("%s\n",p);
}
