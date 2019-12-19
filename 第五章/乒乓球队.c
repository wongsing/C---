#include <stdio.h>
#include <stdlib.h>
//乒乓球队赛手名单
//要考虑ASC11码中X-Z是连续的，所以作为循环范围
//就得用到字符常量 
int main()
{
	char A;
	char B;
	char C;
	char str;
	for(str='X';str<='Z';str++){
		if(str != 'X' && str !='Z'){
			C = str;
		}
	}
	for(str='X';str<='Z';str++){
		if(str !='X' && str != C){
			A = str;
		}
	}
	for(str = 'X';str<= 'Z';str++){
		if(str != A && str !=C){
			B = str;
		}
	}
	printf("A的对手是%c\n",A);
	printf("B的对手是%c\n",B);
	printf("C的对手是%c\n",C);
	return 0;
}
