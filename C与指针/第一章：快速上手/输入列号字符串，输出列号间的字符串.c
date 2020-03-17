#include <stdio.h>
#include <stdlib.h>        //������EXIT_SUCCESS/EXIT_FAILURE 
#include <string.h>
#define MAX_COLS 20        //���ܴ����������� 
#define MAX_INPUT 1000     //ÿ���������������󳤶� 
//����ɶԵ������������ַ������������֮����ַ� 
int read_column_numbers(int columns[], int max);   
int read_column_numbers1(int columns[], int max);  

void rearrange(char *output,char const *input,
		int n_columns,int const columns[]);
		
void rearrange1(char *output,char const *input,
		int n_columns,int const columns[]);
		
int main(void)
{
	int		n_columns;            //��������к� 
	int 	columns[MAX_COLS];    //Ҫ��������� 
	char 	input[MAX_INPUT];     //���������е����� 
	char	output[MAX_INPUT];    //��������е����� 
	//��ȡ�к� 
	n_columns = read_column_numbers(columns,MAX_COLS);
	//��ȡ������ʹ�ӡʣ�µ������� 
	while(gets(input) != NULL){
		printf("Original input : %s\n",input);
		rearrange(output,input,n_columns,columns);
		printf("Rearrange line :%s\n",output);
	}
	return EXIT_SUCCESS;
} 

//��ȡҪ������к� 
int read_column_numbers(int columns[], int max)
{
	int num = 0;    //��ȡ�кźŵĴ���,��֤�Ƿ�ɶԳ��� 
	int ch;
					//��������==1�Ǽ��鷵�سɹ���������ĸ����Ƿ����1 
	while( num < max && scanf("%d",&columns[num])==1
			&& columns[num]>=0)
				num +=1;
	
	if(num%2 != 0){
		puts("Last column number is not paired.");
		exit(EXIT_FAILURE);
	}
	//���������а������һ�����ֵ��ǲ������� 
	while((ch = getchar()) != EOF && ch != '\n')
		;
	
	return num;
}

int read_column_numbers1(int columns[], int max)
{
	int num = 0;    //��ȡ�кźŵĴ���,��֤�Ƿ�ɶԳ��� 
	int ch;
					//��������==1�Ǽ��鷵�سɹ���������ĸ����Ƿ����1 
	while( num < max && scanf("%d",&columns[num])==1
			&& columns[num]>=0)
				num +=1;
	

	return num;
}
//���������У���ָ���е��ַ�������һ���������NULL��β 
void rearrange(char *output ,char const *input,
			int n_columns, int const columns[])
{
	int col;              //columns������±� 
	int output_col;		  //����м����� 
	int len;			  //����еĳ��� 
	
	len = strlen( input );  
	output_col = 0;
	
	for(col=0;col< n_columns;col+=2){
		
		int nchars = columns[col + 1] - columns[col] + 1;
		//��Ҫ����ĳ��� 
		//�����н�����������������������ͽ������� 
		if(columns[col]>= len || output_col ==MAX_INPUT-1)
				break;
		//�������пռ䲻�㣬ֻ���ƿ������ɵ�����	
		if(output_col+nchars >MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col -1;
		//������ص�����,strncpy���������������һ���Ǹ��Ƶĳ��� 
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}
		//���ֵ'\0'�ַ��������� 
		output[output_col] = '\0';
}

//��break �ĳ�continue 
void rearrange1(char *output ,char const *input,
			int n_columns, int const columns[])
{
	int col;              //columns������±� 
	int output_col;		  //����м����� 
	int len;			  //����еĳ��� 
	
	len = strlen( input );  
	output_col = 0;
	
	for(col=0;col< n_columns;col+=2){
		
		int nchars = columns[col + 1] - columns[col] + 1;
		//��Ҫ����ĳ��� 
		//�����в����������������Χ 
		if(columns[col]>= len )
				continue;
		//�����н�����������������������ͽ������� 				
		if(output_col ==MAX_INPUT-1)
				break;
		//�������пռ䲻�㣬ֻ���ƿ������ɵ�����	
		if(output_col== MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col -1;
			
		if(columns[col]+nchars - 1 >= len)
			nchars = len - columns[col];
			
		//������ص�����,strncpy���������������һ���Ǹ��Ƶĳ��� 
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}
		//���ֵ'\0'�ַ��������� 
		output[output_col] = '\0';
}
