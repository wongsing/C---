#include <stdio.h>
#include <string.h>
#define N 10000  //“#”开头的均为预处理命令。“define”为宏定义命令 。N代替10000 
//字符串比对 
void mystr(char *b1,const char *a1);
int main()
{
	char s1[N];
	char s2[N];
//字符输入gets表示标准输入一行字符串 
	gets(s1);   
	gets(s2);
	mystr(s2,s1);  //调用函数 
	return 0;	
}

//定义一个无返回参数的函数 
void mystr(char *b1,const char *a1)    
{
	int i , j ,ret;   
	ret = 0;   //作为区分值，是否找得到字符串相等的地方 
	for(i=0;i<strlen(b1);i++){  
		int m,n;
		m = i;
		n = 0;   //作为区分值，是否能与s1字符完全相等 
		for(j=0;j<strlen(a1);j++){   //循环验证是否完全与s1相等 
			if(a1[j]!=b1[m]){
		//若不相等则跳出循环 
				n=1;      
				break;
			}
			m++;
		}
		if(n==0){      //若相等则输出 
			printf("%d ",m-strlen(a1));
			ret = 1;
		}
	}
	if(ret==0)printf("-1");
	return ;
}
