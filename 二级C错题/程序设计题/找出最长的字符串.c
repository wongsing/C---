#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ҳ���ά�ַ�����������ַ��� 
//��ά�ַ����� ���Կ���n��һά�ַ�����,strlenֱ������ַ������� 
//���ֱ��maxָ������ַ��� 
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
  printf("�������ɸ��ַ�����");
  gets(ss[i]);
  puts(ss[i]);
  while(!strcmp(ss[i], "****")==0)  /*��4���Ǻ���Ϊ��������ı�־*/
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
