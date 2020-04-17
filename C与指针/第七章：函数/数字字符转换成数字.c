#include <stdio.h>
int ascii_to_integer( char *string);
//将数字字符转换成为整数，若有非数字字符则输出0 
int main()
{
	char a[] = "55a994";
	printf("%d\n",ascii_to_integer(a));
	return 0;
}

int ascii_to_integer( char *string)
{
	char *p;
	int ret , sum = 0 , num ;
	for(p = string ;*p != '\0';p++)
	{
		if(*p >= '0' && *p <= '9' )	ret = 1;
		else{
				ret = 0;
				break;
		}
	}
	
	if(ret)
	{
		for( p = string ; *p != '\0' ; p++)
		{
			num = *p -'0';
			sum = sum * 10 + num; 
		}
	}
	return sum;
}

int ascii_to_integer( char *string)
{
	int sum = 0;
	while(*string >= '0' && *string <= '9')
	{
		value *= 10;
		value += *string - '0';
		string++;
	}
	
	if(*string != '\0')
		value = 0;
		
	return 0;
}

