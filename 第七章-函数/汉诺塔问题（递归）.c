#include <stdio.h>
//��ŵ������ --->Ҫ��n-1����һ�����壬�������������ƶ�
 //���õݹ�-->��ϵ����ջ 
int main()
{
	void hanoi(int n,char a,char b,char c);
	int m;
	printf("input the number of diskes:");
	scanf("%d",&m);
	printf("The step to move %d diskes:\n",m);
	hanoi(m,'A','B','C');
	return 0;
}
//n�����Ӵ�A������B������C��
//�������� 
void hanoi(int n,char a,char b,char c)
{
	void move(char x,char y);
	if(n==1)      //�ݹ��˳����� 
		move(a,c); 
	else
		{
		hanoi(n-1,a,c,b);   //���Ƚ���C����A�Ƶ�B�� 
		 
		move(a,c);			//��A�����һ��ֱ���Ƶ�C�� 
		hanoi(n-1,b,a,c);   //����A����B���Ƶ�C�� 
		}
}

void move(char x,char y)
{
	printf("%c-->%c\n",x,y);
}
