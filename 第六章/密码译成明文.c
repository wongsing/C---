#include <stdio.h>
//����ת����ԭ��--->����һ����ĸ��ɵڶ�ʮ������ĸ
 
int main()
{
	char a[80];
	int i;
	gets(a);
	printf("����Ϊ��%s\n",a);
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a'&&a[i]<='z'))
		{
			a[i]='z'-a[i]+'a'; //�����ֵ��ȥ��ĸȻ����ϳ�ʼֵ����ת������ĸ
								//����ASCII��ʵ�� 
		}
		else if((a[i]>='A'&&a[i]<='Z'))
		{
			a[i]='Z'-a[i]+'A';
		}		
	} 
	printf("ԭ��Ϊ��%s\n",a);	
	return 0;
}
