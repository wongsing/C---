#include <stdio.h>

int main (){
	int num,cnt;
	int i,j,t,k,m,n;
	printf("������һ����������λ��������:"); 
	scanf("%d",&num);
	while(num>=(1e+05)){
		printf("������������������");
		scanf("%d",&num);
	}
	i=num;
//���λ�� 
	for(cnt=0;i>0;cnt++){
		i/=10;
	}
	printf("��������%dλ����\n",cnt);
//������� 
	j=num;
	while(j>0){
		t=j%10;
		j/=10;
		printf("%d ",t);
	}
	printf("\n");
	for(n=1;cnt>0;cnt--){
		n*=10;
	}
//	printf("n=%d\n",n);
//˳����� 
	k=num;
	n/=10;
	while(n>0){
		m=k/n;
		k%=n;
		printf("%d ",m);
		n/=10;
	}
	
	return 0;
}
