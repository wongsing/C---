#include <stdio.h>
//������1
//�������ĸ����4����������������ĸ�򱣳ֲ���
//����ASC11�����ж� 
int main(){
	char c;
	while((c=getchar())!='\n'){
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
			c=c+4;
			if(c>'z'||c>'Z'&&c<('Z'+4))
			c = c-26;
		}
		printf("%c",c);
	}
	printf("\n");
	return 0;
}
