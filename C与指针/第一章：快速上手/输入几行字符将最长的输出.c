#include <stdio.h>
#include <string.h>
#define N  1000 
//���뼸���ַ��������� 
//����ԭʼ����Ϊ-1��Ȼ��Ƚϣ�len��Ļ��͸����ַ�����ֵ����longest_len
//�ص���Ҫ��һ�����鴢�棬Ȼ��ʼ�Ƚ�! l
int main()
{
	char input[N];
	char longest[N]; 
	int longest_len = -1 , len ;
	while( gets( input ) != NULL){
		len = strlen(input);
		if(len > longest_len) {
			strcpy(longest,input);
			longest_len = len;
		}
	}
	if(longest_len>=0) puts(longest);
	return 0;
}
