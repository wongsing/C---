#include <stdio.h>
#define N 100
int main()
{
	char s[N];
	gets(s);
	int i , ret=0 ;
	//��Ϊ�������ǺϷ��� 
	for(i=0;s[i]!='\0';i++){b
		if(s[i]=='{') ret+=1;
		if(s[i]=='}'){
			if(ret==0) printf("Υ����������.\n");
			else ret-=1;
		}
	}
		if(ret>0)
		printf("%d�Ի����Ų�ƥ��.\n",ret);
	return 0;
}
