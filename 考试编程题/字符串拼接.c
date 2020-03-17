#include "stdio.h"
char * f1(char *,char *);
char * f2(char *,char *);
void main(void)
{ 
	char *(*fp_ary[2])(char *,char *)={f1,f2};
	char a[80],b[]="C is very powerful tool for programming!\n";
	char *p,c[]="Generally  speaking, \n",d[80];
	p=(*fp_ary[0])(d,b);
	printf("%s",p);
	(*fp_ary[0])(a,c);
	printf("%s",a);
	p=(*fp_ary[1])(a,p);
	printf("%s",p);
} 

char * f1(char * p1,char *p2)
{
	char *p=p1;
	while(*p++=*p2++) ;
	return p1;
}

char * f2(char *p1,char *p2)
{
	char *p=p1;
	while(*p++)
	    ;
	p--,p--;
	f1(p,p2);
	return p1;
}
