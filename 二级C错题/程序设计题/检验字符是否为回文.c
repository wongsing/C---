#include <stdio.h>
#define N 80
//����Ƿ�Ϊ����,��Ҫ�����±꣬����ͷ���
//��һ���ַ����ڵ�����һ�����������ƣ���������ڷ���֤������,Ҳ��˵�ǶԱ�һ�� 
int fun(char *str)
{
	int i,n=0,ret = 1 ;
	char *p = str;
	while(*p){   //�����ַ������±� 
		n++;
		p++;
	} 
	for(i=0;i < n/2 ;i++){
		if(str[i] != str[n-i-1])
		 {
			ret = 0 ;			
			break;			
		}
	}
	return ret;
}
//��һ�������ҳ��±�,�������������� 
int fun1(char *str){
	int i , j = 0, ret = 1;
	while(str[j]) j++;
	j--;
	for(i=0;i<j;i++,j--){
		if(str[i] != str[j]){
			ret = 0;
			break;
		}
	}
	return ret;
}
main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun1(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
