#include<stdio.h>
#include<string.h>
#define N 80
//�Ƚ������ַ���������strcpy--->������ͬ�Ļ���'\0'���� 
int mystr(char *s1,char *s2);
int main()
{
	int i,j=0,k=0;
	char str1[N] ,str2[N];
	gets(str1);
	gets(str2);
	printf("%d\n",mystr(str1,str2));	
//	printf("%d\n",strcmp(str1,str2));
	for(i=0;((str1[i]!=0)||(str2[i]!=0));i++){ 
		if((str1[i]>str2[i]) || (str1[i]<str2[i])) 
		{
			k=str1[i]-str2[i];
			j=1; 
			break;
		}
	}//�ܹ�˳������ѭ��������if��������ͬ��j�����ж��Ƿ���ͬ  
	if(j==0) printf("���Ϊ��0\n");
	else printf("���Ϊ��%d\n",k); 
	
	return 0;
}

int mystr(char *s1,char *s2)
{
	int i = 0,resu;
	while(s1[i]==s2[i]&&s1[i]!='\0')  i++; 
//������ͬ����'\0'����ʱ���˳�ѭ����Ȼ��ͱȽϲ���ͬ���ַ� 
    if(s1[i]=='\0'&&s2[i]=='\0')  resu=0;  
    else  resu=s1[i]-s2[i];  
	return resu;
}
