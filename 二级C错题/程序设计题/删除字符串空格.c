#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
//ɾ���ַ����еĿո񣬿���ֱ����strcpy 
void fun (char *str)
{
	char str1[81];
	int i,j=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' ') str1[j++]=str[i];
	}
	for(i=0;str1[i]!='\0';i++){  //������strcpy���棬ͷ�ļ�Ҫ��string 
		str[i]=str1[i];
	}
		str[i]='\0';	
}
main()
{
  char str[81];
  char Msg[]="Input a string:";
  int n;
  FILE *out;
  printf(Msg);
  gets(str);
  puts(str);
  fun(str); 
  printf("*** str: %s\n",str); 
  /******************************/
  out=fopen("out.dat","w");
  fun(Msg);
  fprintf(out,"%s",Msg);
  fclose(out);
  /******************************/
}
