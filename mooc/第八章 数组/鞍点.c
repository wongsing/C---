#include <stdio.h>
//Ѱ�Ұ��� 

int main()

{
	int n ;                  //����n*n�ľ��� 
	scanf("%d",&n);
	int number[n][n];
	
	int i = 0;      //��ʼ�������½Ǳ� 
	int j = 0;
	
	for(i=0;i<n;i++){           //��������forѭ������������                 
		for(j=0;j<n;j++){       //һ����������i++�����ڶ��� 
			scanf("%d",&number[i][j]);
		}
	}
	
	int t = 0 ;    //����������С������jֵ�� 
	int k,ret;     //k����ѭ���ж�����i�����ֵ 
	ret = -1;      //ret�����ж��Ƿ��а��� 
	for(i=0,j=0;i<n;i++){       //���ȴ��п�ʼ�� 
		for(j=0;j<n;j++){
	//���ҳ���һ������������¼������	
			if(number[i][0]<number[i][j]){     
				t = j;
				}
			}
	//�ٱȽ�������Ƿ�Ϊ������С 
		for(k=0;k<n;k++){	
	//��������κ�һ����������ѭ����i++���������ѭ��
	//�������С�ģ�����k==n����ѭ��			
			if(number[i][t] > number[k][t]){
			break;
			}else;
	}
	//���k==n����ζ���ҵ�����
	//ret��ֵ ��=-1  ��������� 
		if(k==n){
			printf("%d %d",i,t);
			ret = 1;
		}
	}
	//��� �ް��㣬���NO. 
		if(ret == -1){
			printf("NO");
		}
	return 0;
}
