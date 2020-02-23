#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//找出二维字符数组中最长的字符串 
//二维字符数组 可以看是n个一维字符数组,strlen直接求出字符串长度 
//最后直接max指向最长的字符串 
char *fun(char (*a)[81], int num, char *max)
{
	int i;
	max=a[0];
	for(i=1;i<num;i++){
		if(strlen(max)<strlen(a[i]))
			max=a[i];
	}
	return max;
}
void main()
{
  FILE *wf;
  char ss[10][81],*ps=NULL;
  char s[3][81]={"abcd","deg","diegns"},*p=NULL;
  int  i=0,n;
  system("CLS");
  printf("输入若干个字符串：");
  gets(ss[i]);
  puts(ss[i]);
  while(!strcmp(ss[i], "****")==0)  /*用4个星号作为结束输入的标志*/
     {
      i++;
      gets(ss[i]);
      puts(ss[i]);
     }
  n=i;
  ps=fun(ss,n,ps);
  printf("\nmax=%s\n",ps);
/******************************/
  wf=fopen("out.dat","w");
  p=fun(s,3,p);
  fprintf(wf,"%s",p);
  fclose(wf);
/*****************************/
}
