#include <stdio.h>
char *a="you",b[]="welcome#you#to#China!";
//�ҳ�a�ַ���֮����ַ��� 
main()
{
	int i,j=0;
	char *p;
	for(i=0;b[i]!='\0';i++)
	{
		if(*a==b[i]){
			p=&b[i]; //�õ�b[8]��ַ�������ַ�y�ĵ�ַ 
			for(j=0;a[j]!='\0';j++){
				if(a[j]!=*p) break;
				p++; //pһֱ�Ƶ�you֮�� 
			}
		if(a[j]=='\0') break;			
		}
	}
	printf("%s\n",p);
}
