#include <stdio.h>
#include <stdlib.h>
//将逐行输入换成逐字输入 ,逐行输出 
int
main()
{
	int ch;
	int line;
	int start;
	
	line = 0;  
	start = 1;
//EOF 用Ctrl Z 结束 
	while((ch=getchar())!= EOF){
		if(start == 1){
			start = 0;
			line += 1;
			printf("%d ",line);
		}
		
		putchar(ch);
		if(ch == '\n')
			start = 1;
	}
	
	return EXIT_SUCCESS; 
}
