#include <stdio.h>
#include <string.h>
//�ӱ�׼�����ı������ǰ���е��ı�������ж�����ͬ����ֻ���һ��
//gets()������Ctrl Z ��EOF�� 
//��������ֻͬ����һ�εĻ����ڲ����ʱ�����0������һ�κ󣬲������1��֮��������Ļ�����ret�����ǲ�ִ�е�
//strcmp �ַ�����ȷ���0 
#define N 		129
#define TRUE	 1
#define FALUE 	 0
int main()
{
	char pre[N], input[N];
	int ret;
	//gets()��������EOF ctrl z 
	if(gets(pre) != NULL){ 
		while(gets(input) != NULL){
			if(strcmp(input,pre) != 0){
				ret = FALUE;
				strcpy(pre,input);
			}else if(!ret){
				puts(input);
				ret = TRUE;
			}
		}
	} 
	return 0;
}
