#include <stdio.h>
#include <string.h>
//���ַ���strstr 
int main(int argc, char const argv[]){
	char s1[] = "hello wa haoni!";
	char s2[] = "wa";
	char *p;
	p = strstr(s1,s2);
//����s2������s1�к���������ַ�������s2���� 
	char *q=strstr(s1,s2);
//q�൱��s2��s1���״γ��ֵĵ�ַ��ָ��s2�״γ��ֵ�λ�� 
	printf("%s\n",p);
	printf("%d",p-s1);
	return 0;
}
