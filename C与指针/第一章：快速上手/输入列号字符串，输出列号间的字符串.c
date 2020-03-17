#include <stdio.h>
#include <stdlib.h>        //定义了EXIT_SUCCESS/EXIT_FAILURE 
#include <string.h>
#define MAX_COLS 20        //所能处理的最大列数 
#define MAX_INPUT 1000     //每行中所能输入的最大长度 
//输入成对的列数，输入字符串，输出列数之间的字符 
int read_column_numbers(int columns[], int max);   
int read_column_numbers1(int columns[], int max);  

void rearrange(char *output,char const *input,
		int n_columns,int const columns[]);
		
void rearrange1(char *output,char const *input,
		int n_columns,int const columns[]);
		
int main(void)
{
	int		n_columns;            //所处理的列号 
	int 	columns[MAX_COLS];    //要处理的列数 
	char 	input[MAX_INPUT];     //容纳输入行的数组 
	char	output[MAX_INPUT];    //容纳输出行的数组 
	//读取列号 
	n_columns = read_column_numbers(columns,MAX_COLS);
	//读取、处理和打印剩下的输入行 
	while(gets(input) != NULL){
		printf("Original input : %s\n",input);
		rearrange(output,input,n_columns,columns);
		printf("Rearrange line :%s\n",output);
	}
	return EXIT_SUCCESS;
} 

//读取要处理的列号 
int read_column_numbers(int columns[], int max)
{
	int num = 0;    //读取列号号的次数,验证是否成对出现 
	int ch;
					//令输入行==1是检验返回成功输入变量的个数是否等于1 
	while( num < max && scanf("%d",&columns[num])==1
			&& columns[num]>=0)
				num +=1;
	
	if(num%2 != 0){
		puts("Last column number is not paired.");
		exit(EXIT_FAILURE);
	}
	//丢弃该行中包含最后一个数字的那部分内容 
	while((ch = getchar()) != EOF && ch != '\n')
		;
	
	return num;
}

int read_column_numbers1(int columns[], int max)
{
	int num = 0;    //读取列号号的次数,验证是否成对出现 
	int ch;
					//令输入行==1是检验返回成功输入变量的个数是否等于1 
	while( num < max && scanf("%d",&columns[num])==1
			&& columns[num]>=0)
				num +=1;
	

	return num;
}
//处理输入行，将指定列的字符连接在一起，输出行以NULL结尾 
void rearrange(char *output ,char const *input,
			int n_columns, int const columns[])
{
	int col;              //columns数组的下标 
	int output_col;		  //输出列计数器 
	int len;			  //输出行的长度 
	
	len = strlen( input );  
	output_col = 0;
	
	for(col=0;col< n_columns;col+=2){
		
		int nchars = columns[col + 1] - columns[col] + 1;
		//是要处理的长度 
		//输入行结束或者输出行数组已满，就结束任务 
		if(columns[col]>= len || output_col ==MAX_INPUT-1)
				break;
		//如果输出行空间不足，只复制可以容纳的数据	
		if(output_col+nchars >MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col -1;
		//复制相关的数据,strncpy三个三参数，最后一个是复制的长度 
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}
		//最后赋值'\0'字符串结束！ 
		output[output_col] = '\0';
}

//将break 改成continue 
void rearrange1(char *output ,char const *input,
			int n_columns, int const columns[])
{
	int col;              //columns数组的下标 
	int output_col;		  //输出列计数器 
	int len;			  //输出行的长度 
	
	len = strlen( input );  
	output_col = 0;
	
	for(col=0;col< n_columns;col+=2){
		
		int nchars = columns[col + 1] - columns[col] + 1;
		//是要处理的长度 
		//输入行不长，则跳过这个范围 
		if(columns[col]>= len )
				continue;
		//输入行结束或者输出行数组已满，就结束任务 				
		if(output_col ==MAX_INPUT-1)
				break;
		//如果输出行空间不足，只复制可以容纳的数据	
		if(output_col== MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col -1;
			
		if(columns[col]+nchars - 1 >= len)
			nchars = len - columns[col];
			
		//复制相关的数据,strncpy三个三参数，最后一个是复制的长度 
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}
		//最后赋值'\0'字符串结束！ 
		output[output_col] = '\0';
}
