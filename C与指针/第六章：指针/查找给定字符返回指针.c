#include<stdio.h>
//��ָ����һ���ַ���������������һ�������ַ������г��ֵ��ַ�
//���source��ƥ��chars�κ��ַ��ĵ�һ���ַ����������λ�õ�ָ�룬��û�ҵ��ͷ���NULL 
char *find_char(char const *source,char const *chars);

int main()
{	
	char *s = "bc" , *c = "ddasc" , *p;
	p = find_char(s,c);
	if(p) 	printf("���ַ�ƥ��:%c",*p);
	else 	printf("�����ַ���ƥ��!\n");
	return 0;
}

char *find_char(char const *source,char const *chars)
{
	int ret = 0;
	char const *p;
	if(source!=NULL && chars!=NULL){
	for(;*source != '\0';source++){
		for(p = chars;*p != '\0';p++){
			if(*source == *p){
				ret = 1 ;
				return source;
			}
		}
 
	}
}
	if(ret) return NULL;	
}


