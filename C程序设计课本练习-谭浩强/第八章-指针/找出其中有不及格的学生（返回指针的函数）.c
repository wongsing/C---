#include <stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4]);   
	float *p;
	int i , j;
	for(i=0;i<3;i++){
		p=search(score+i);
		if(p==*(score+i)){  //��p�ĵ�ַ����null�������뷵�صĵ�ַ��ͬ����ô������ϸ�ѧ������Ϣ 
			printf("No.%d score:",i);
		for(j=0;j<4;j++)
			printf("%5.2f ",*(p+j));
		
		printf("\n");
		}
	}
	return 0;
}

//����һ������������ָ��ĺ������β���ָ��һά�����ָ�� 
float *search(float(*pointer)[4])
{
	int i =0;
	float *pt;
	pt = NULL;  //��Ϊ����ı�־ 
	for(;i<4;i++){
			if(*(*pointer+i)<60) pt=*pointer;   //�����һ�Ʋ�������ptָ��score[i][0]
			//(*pointer+i)--->score[0][i]
		}
	return pt;	
}	

