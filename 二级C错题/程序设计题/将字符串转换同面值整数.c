#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
#define  N  9
//将两个字符串转换成同面值整数，并且将两个整数的和相加作为调用函数的返回值 
//规定字符串只含有9个以下数字字符 
long  ctod( char  *s )
{ long  d=0;
  while(*s)
// isdigit--->库函数，判断该数是否为整数 
    if(isdigit( *s))  {
/**********found**********/
      d=d*10+*s-'0';  //要将字符(ASCII)转换成数值-->则需要字符-'0'-->就变成数值 
/**********found**********/
      s++; 
	 }
  return  d;
}
long  fun( char  *a, char  *b )
{
/**********found**********/
//因为a、b已经是指针，所以再传给ctod 不要再取* 
  return  ctod(a) + ctod(b);   //返回的是两个字符串面值的和 
}
main()
{ char  s1[N],s2[N];
  do
  { printf("Input  string  s1 : "); gets(s1); }
  while( strlen(s1)>N );  //长度<= N 
  do
  { printf("Input  string  s2 : "); gets(s2); }
  while( strlen(s2)>N );
  printf("The result is:  %ld\n", fun(s1,s2) );
}


