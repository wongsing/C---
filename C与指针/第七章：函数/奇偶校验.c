#include <stdio.h>
//żУ��-->������������Ƿ�Ϊż������1�ĸ��� 
int 
even(int value , int n_bits);
int main()
{
	int a = 2, b = 4 ;
	if(even(a,b)) printf("%dΪż��\n",a);
	else printf("%dΪ����\n",a);
	return 0;
	
}
//valueΪ��������ֵ��n_bits�Ǹ���ֵ����Чλ�� 
int 
even(int value, int n_bits)
{
	int parity = 0;  //ͳ����ֵ��1�ĸ��� 
	while(n_bits > 0){
		parity += value & 1 ;
		printf("%d\n",parity);
		value >>= 1; //����һλ 
		n_bits-=1; 
	}
	//��ʾ1�ĸ�����ż��������true 
	return (parity % 2) == 0 ; 
}
