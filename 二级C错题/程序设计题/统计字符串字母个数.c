#include <stdio.h>
//统计字符串中 大写字母和小写字母的个数 
/**********found**********/
void fun ( char *s, int *a, int *b )
{
  while ( *s )
  {  if ( *s >= 'A' && *s <= 'Z' )
/**********found**********/
       *a=*a+1 ;
     if ( *s >= 'a' && *s <= 'z' )
/**********found**********/
        *b=*b+1;
     s++;
  }
}

main( )
{  char   s[100];  int   upper = 0, lower = 0 ;
   printf( "\nPlease a string :  " );  gets ( s );
   fun ( s,  & upper, &lower );
   printf( "\n upper = %d  lower = %d\n", upper, lower );
}

