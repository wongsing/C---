#include<stdio.h>
#include<string.h>

#define NUL '\0' /* null byte */
#define TRUE 1
#define FALSE 0
//ɾ��һ���ַ�����һ���֣����substrû�г�����str�������޸ģ��ͷ���0 
//�����������str����ͬ���ֵĺ������ݸ��Ƶ���ͬ���֣�����1 
char del_substr(char  *str , char const *substr);
int del_substr1(char  *str , char const *substr);
char *
match( char *str, char *want );
int main()
{	
	char s[] = "abcdefg" , c[] = "cde" ;
	int i ;
	i = del_substr(s,c);
	if(i) 	printf("%s",s);
	else 	printf("�����ַ���ƥ��!\n");
	return 0;
}

char del_substr(char  *str , char const *substr)
{
	char *p = str;
	int ret = 0 , i ,cnt = 0 , len = strlen(substr);
	if(str != NULL && substr != NULL){
		for(;*substr != '\0';substr++){
			for(;*str != '\0' ;str++){
				if(*substr==*str){
					cnt++;
					str++;
					break;
				} 
					cnt = 0;
			}
	}		
		p = str;
	if(cnt){
		for(i = len;i>0;i--){
			*(str-i) = *(p++);
			ret = 1;
		}
	}
}
	return ret;
}

char *
match( char *str, char *want )
{
/*
** Keep looking while there are more characters in ��want��. We fall out
** of the loop if we get a match.
*/
while( *want != NUL )
if( *str++ != *want++ )
return NULL;
return str;
}
int
del_substr1( char *str, char const *substr )
{
char *next;
/*
** Look through the string for the first occurrence of the substring.
*/

while( *str != NUL ){
next = match( str, substr );
if( next != NULL )
break;
str++;
}
/*
** If we reached the end of the string, then the substring was not
** found.
*/
if( *str == NUL )
return FALSE;
/*
** Delete the substring by copying the bytes after it over the bytes of
** the substring itself.
*/
while( *str++ = *next++ )
;
return TRUE;
}
