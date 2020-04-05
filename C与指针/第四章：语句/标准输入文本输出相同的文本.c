#include <stdio.h>
#include <string.h>
//从标准输入文本，输出前后行的文本，如果有多行相同，则只输出一行
//gets()结束用Ctrl Z （EOF） 
//技巧是相同只出现一次的话，在不相等时设参数0，满足一次后，参数变成1，之后若满足的话（！ret）都是不执行的
//strcmp 字符串相等返回0 
#define N 		129
#define TRUE	 1
#define FALUE 	 0
int main()
{
	char pre[N], input[N];
	int ret;
	//gets()结束是以EOF ctrl z 
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
