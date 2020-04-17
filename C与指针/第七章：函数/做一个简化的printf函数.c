/*
** Bare�Cbones printf function: handles the %d, %f, %s, and %c format codes.
stdarg����standard����׼�� arguments���������򻯶�������ҪĿ��Ϊ�ú����ܹ����տɱ������
ʵ��һ���򻯵�printf��������%֮ǰ���ַ�putchar�����Ȼ���������swtich caseѡ�� 
*/
#include <stdarg.h>
#include<stdio.h>


int main()
{
	return 0;
} 
void
printf( char *format, ... )
{
va_list arg;
char ch;
char *str;
va_start( arg, format );
/*
** Get the format characters one by one.
*/
while( ( ch = *format++ ) != '\0' ){
if( ch != '%' ){
/*
** Not a format code �C�C print the character verbatim.
*/
putchar( ch );
continue;
}
/*
** We got a % �C�C now get the format code and use it to format
** the next argument.
*/
switch( *format != '\0' ? *format++ : '\0' ){
case 'd':
print_integer( va_arg( arg, int ) );
break;
case 'f':
print_float( va_arg( arg, float ) );
break;
case 'c':
putchar( va_arg( arg, int ) );
break;
case 's':
str = va_arg( arg, char * );
while( *str != '\0' )
putchar( *str++ );
break;
} } }
