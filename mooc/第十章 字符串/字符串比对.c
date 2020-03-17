#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10000
int main()
{
    char a[N] = "", b[N] = "";//定义两个字符串
    gets(a);//利用函数从键盘中获得字符串
    gets(b);
    char *p = strstr(b,a);

    if(p==NULL)
	{ 
        printf("-1");
    }
    while(p!=NULL)
    {
    	printf("p=%d ,b=%d\n",p,b);
        printf("%d \n", p-b);
        p = strstr(++p, a);
    }
    return 0;
}

