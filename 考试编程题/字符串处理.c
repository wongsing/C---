#include "stdio.h"
char *strmins(char *, char *);
void main(void)
{
   char a[80] = "", b[ ] = "abcde";
   printf("%s\n", strmins(strmins(a, b), b));
}
char *strmins(char *s, char *t)
{
   int i, m = 0, n = 0;
   while(*(s + m++)) 
;
   m--;
   while(*(t + n))
      n++;
   for(i = m; i >= m/2; i--){
       *(s + i + n) = *(s + i);
//	   printf("%c\n", *(s + i + n)) ;
//	   printf("%s\n", *s ) ;
   }
//      *(s + i + n) = *(s + i);
   for(i = 0;i < n; i++){
      *(s + i + m/2) = *(t + i);
//	   printf("%c\n", *(s + i + n)) ;	
//	   	   printf("%s\n", *s ) ;     	
   }
//      *(s + i + m/2) = *(t + i);
   return s;
} 
