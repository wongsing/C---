#include <stdio.h>
#include <string.h>
#define N 10000  //��#����ͷ�ľ�ΪԤ���������define��Ϊ�궨������ ��N����10000 
//�ַ����ȶ� 
void mystr(char *b1,const char *a1);
int main()
{
	char s1[N];
	char s2[N];
//�ַ�����gets��ʾ��׼����һ���ַ��� 
	gets(s1);   
	gets(s2);
	mystr(s2,s1);  //���ú��� 
	return 0;	
}

//����һ���޷��ز����ĺ��� 
void mystr(char *b1,const char *a1)    
{
	int i , j ,ret;   
	ret = 0;   //��Ϊ����ֵ���Ƿ��ҵõ��ַ�����ȵĵط� 
	for(i=0;i<strlen(b1);i++){  
		int m,n;
		m = i;
		n = 0;   //��Ϊ����ֵ���Ƿ�����s1�ַ���ȫ��� 
		for(j=0;j<strlen(a1);j++){   //ѭ����֤�Ƿ���ȫ��s1��� 
			if(a1[j]!=b1[m]){
		//�������������ѭ�� 
				n=1;      
				break;
			}
			m++;
		}
		if(n==0){      //���������� 
			printf("%d ",m-strlen(a1));
			ret = 1;
		}
	}
	if(ret==0)printf("-1");
	return ;
}
