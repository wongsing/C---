#include <stdio.h>
#include <stdlib.h>
//打开和关闭文件 
int main(int ac , char **av)
{
	int	exit_status = EXIT_SUCCESS;
	FILE	*input;   //用来保存fopen的返回值 
	
	while(*++av != NULL){ //打开流 
		input = fopen(*av,"r"); //第二个参数是mode表状态,r是读取,w写,a添加 
							//成功则会返回一个指向 FILE 结构的指针  
		if(input == NULL){  //input函数失败返回NULL指针，从而进行perror函数打印错误信息 
			perror( *av );
			exit_status = EXIT_FAILURE;
			continue;
		}
		//关闭流 
	//很有必要对input进行检查，虽然fclose已经是结束了，但是也有可能发生错误 
		if(fclose(input) != 0){ //fclose执行成功返回0，否则返回EOF 
			perror( "fclose");
			exit(EXIT_FAILURE);
		}	
	}
		return exit_status;
}
