#include <stdio.h>
#include <string.h>
//��һ���ַ���������һ���ַ��������Ұ������� 
int main()
{
char a[20]="cehiknqtw";
char *s="fbla",*p;
int i, j;
//�ַ�ָ��õ�s�ַ������׵�ַ��ֱ��*p==0����ѭ�� 
for(p=s; *p; p++) {
   j=0;
//���s�ַ�������ĸ��a�ַ������ŵڼ�λ 
   while (*p>=a[j] && a[j]!='\0') 
   j++;
//��ѭ��ʱΪ��ÿ����һ���ַ�����������Ԫ��������һ���ڴ� 
//һֱ��j��λ��ֹͣ����*p��ֵ��ֵa[j]; 
   for(i=strlen(a); i>=j; i--){
      a[i+1] = a[i];
   }
   a[j]=*p;
}
printf("%s\n", a);
	return 0;
} 

