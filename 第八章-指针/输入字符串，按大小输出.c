#include <stdio.h>
#include <string.h>
//����3���ַ��������մ�С��� 
int main()
{
	//����s[4][80]��һ��һά���������������滻ֵ�� 
	char s[4][80],(*p)[80];
	int i;
	for(p=s,i=0;i<3;i++) scanf("%s",(*(p+i)));//*(p+i)-->a[i] һά���� 
	if(strcmp(*p,*(p+1))>0){ 
	//�����һ���ַ������ڵڶ������滻 
		strcpy(s[3],*p),strcpy(*p,*(p+1)),strcpy(*(p+1),s[3]);
	}
	if(strcmp(*p,*(p+2))>0){
		strcpy(s[3],*p),strcpy(*p,*(p+2)),strcpy(*(p+2),s[3]);
	}
	if(strcmp(*(p+1),*(p+2))>0){
		strcpy(s[3],*(p+1)),strcpy(*(p+1),*(p+2)),strcpy(*(p+2),s[3]);
	}	
	printf("%s %s %s\n",p,p+1,p+2);
	return 0;
}

