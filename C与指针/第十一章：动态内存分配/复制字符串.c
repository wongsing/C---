#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
�ö�̬�ڴ��������һ���ַ����Ŀ�����
ע����ó���Ҫ�������ڴ��Ƿ�ɹ����� 
*/
char *
strdup(char const *string)
{
	char *new_string;
	//�����㹻�����ڴ棬+1��ԭ���ַ�����'\0'�� 
	new_string = malloc(sizeof(string)+1);
	//�ɹ�����Ϳ����ַ��� 
	if(new_string != NULL)
		strcpy( new_string , string);
		
	return new_string;
}

int main()
{
	char *str = "hello world!", *str1;
	str1 = strdup(str);
	printf("%s\n",str1);
	free(str1);
	return 0;	
}
