 #include <stdio.h>
 int *f(int *p);  //ָ��ָ��ķ���ָ��ֵ�ú��� 
int main()
{
	int i;
	f(&i);
	*f(&i)=6;
	int *p=f(&i);
//	f(&(i+6));  "i+6"��һ���������ʽ��������&ȡ��ַ��Ҳû�е�ַ 
	return 0;
} 
int *f(int *p)
{
	return 0;
}
