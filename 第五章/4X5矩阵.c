#include <stdio.h>
//�������
//��Ҫ�˽�continue/break ����
//continue �ǽ�������ѭ����������һ��ѭ����
//break ��������ѭ��; 
int main (){
	int i,j;
	for(i=1;i<5;i++){
		for(j=1;j<=5;j++){

			if(i==3&&j==1)continue;
//			if(i==3&&j==1)break;
			printf("%d\t",i*j);

		}
		printf("\n");
	}
	return 0;
}
