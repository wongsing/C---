#include <stdio.h>
//Ѱ�Ұ���-->������󣬱�����С
 
int main ()
{
	int n , i ,j ,a;
	scanf("%d",&n);
	int b[n][n];
//������������Ԫ�� 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
//������������Ԫ��--->for test 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d",b[i][j]);
		}
			printf("\n");		
	}
	printf("\n");
		int ret = 0;   //�����б��Ƿ�Ϊ���� 
		int maxj = 0 ;  //����������ϰ�������� 
	for(a=0;a<n;a++){ 
	//ʼ���Ե�һ��Ϊ���飬����Ϊ�����������������ó����ܹ���������Ƿ�Ϊ������С�� 
		for(i=0,j=1;j<n;j++){        //���ҳ���һ�������� 
			if(b[i][j]>b[a][maxj]){
				maxj=j;    //������������� 
			}
	}   //�ٽ��м���Ƿ�Ϊ������С�� ��������������ѭ�� 
		for(i=0;i<n;i++){   
			if(b[i][maxj]<b[a][maxj]) break;						
		}
		if(i==n){   //��û����ѭ�������ǰ��� 
			printf("����Ϊ%d,(%d,%d)\n",b[a][maxj],a,maxj);
			ret = 1;
		}
		}
	if(ret==0) printf("û�а���\n");
	return 0;
}
