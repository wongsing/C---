#include <stdio.h>
#include <math.h>

//��100~200֮������� 
int main()
{
	int i ,j ;
	int prime=1;
	int cnt = 0;
//��Ϊż��һ����������������ֻ�������������Ч��, 
//��101��ʼÿ�μ�2
//ֻ�ж�2~����i֮�� ����һ�ж�Ӱ��Ч�� 
	for(i=101;i<=200;i=i+2){
		int k;
		k=sqrt(i);
		for(j=2;j<=k;j++){
			if(i%j==0){
				prime=0;
				break;
			}
			prime=1;
		}
		if(prime==1){
		cnt++;
		printf("%d ",i);
	//�������һ�����; 
		if(cnt%5==0)printf("\n"); 	
		}
}
	return 0;
	
}
