#include <stdio.h>
//�����ȼ�
//������������С��
//������switch������Ҫǿ������ת��
//�������ַ� 
int main(){
	float score;
	char grade;
	printf("���������ķ���:");
	scanf("%f",&score);
	while(score<0||score>100){
		printf("�����������������:");
		scanf("%f",&score);
	}
	
	switch ((int)(score/10)){
		case 9: grade='A';break;
		case 8: grade='B';break;
		case 7: grade='C';break;
		case 6: grade='D';break;	
		default:grade='E';	
	}
	
	printf("�ɼ���%5.1f����Ӧ�ĵȼ���%c��\n",score,grade);
	return 0;
}
