#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10000
int main()
{
    char a[N] = "", b[N] = "";//���������ַ���
    gets(a);//���ú����Ӽ����л���ַ���
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

