#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
#define  N  9
//�������ַ���ת����ͬ��ֵ���������ҽ����������ĺ������Ϊ���ú����ķ���ֵ 
//�涨�ַ���ֻ����9�����������ַ� 
long  ctod( char  *s )
{ long  d=0;
  while(*s)
// isdigit--->�⺯�����жϸ����Ƿ�Ϊ���� 
    if(isdigit( *s))  {
/**********found**********/
      d=d*10+*s-'0';  //Ҫ���ַ�(ASCII)ת������ֵ-->����Ҫ�ַ�-'0'-->�ͱ����ֵ 
/**********found**********/
      s++; 
	 }
  return  d;
}
long  fun( char  *a, char  *b )
{
/**********found**********/
//��Ϊa��b�Ѿ���ָ�룬�����ٴ���ctod ��Ҫ��ȡ* 
  return  ctod(a) + ctod(b);   //���ص��������ַ�����ֵ�ĺ� 
}
main()
{ char  s1[N],s2[N];
  do
  { printf("Input  string  s1 : "); gets(s1); }
  while( strlen(s1)>N );  //����<= N 
  do
  { printf("Input  string  s2 : "); gets(s2); }
  while( strlen(s2)>N );
  printf("The result is:  %ld\n", fun(s1,s2) );
}


