#include  <stdlib.h>
#include  <string.h>
#include  <conio.h>
#include  <ctype.h>
#include  <stdio.h>
#include  <string.h>
//�������е�������ĸ��ɴ�д 
/*************found**************/
void upfst(char *p) //���õ������飬�������׵�ַ��Ҳ��p[] 
{
  int k=0;   //Ŀ�����þ����׵�������ĸΪ��д 
  for ( ;*p;p++)
     if (k) //��ʼk=0����else,֮��k=1,����if��ʼ�жϿո�
	 		//���ǿո�����һ��һ���ǽ���else����ɴ�д��ĸ��k=1�����жϿո�
        {
         if (*p==' ')  
         	k=0;
        }
     else
        {
			if (*p!=' ')  
			{
				k=1;
				*p=toupper(*p); //���ַ�ת��Ϊ��д��ĸ ����*p=*p+32 
			}
		}
}
void main()
{
	char  chrstr[81];
	system("CLS");    
	printf("\nPlease enter an English text line: ");
	gets(chrstr); 
	printf("\nBofore changing:\n  %s",chrstr);
	upfst(chrstr);
	printf("\nAfter changing:\n  %s\n",chrstr);
}
