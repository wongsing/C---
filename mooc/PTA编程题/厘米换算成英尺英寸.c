#include <stdio.h>
//���׻���Ӣ��Ӣ��
//(foot+inch/12)��0.3048
//inch����С������ 
//Ӣ��foot��Ӣ��inch 
int main()

{	
	int x ;
	int foot;
	int inch;
	
	scanf("%d",&x);
	
	foot = x/30.48;  
//ȡ�� 
	inch = (x/30.48-foot)*12;
//x/30.48-->�Զ�����ת����double����ȥ������ʣ��С������-->�ٳ���12����	
	printf("%d %d",foot,inch);					
	return 0;
}

