#include <stdio.h>
int main()
{
	long int num;
	int indiv,ten,hundred,thousand,ten_thousand,place;
	//�ֱ��ʾ��λ��ʮλ����λ��ǧλ����λ��λ����
	printf("������һ��������0~99999����") ;
	scanf("%ld",&num);
	if(num>9999) place=5;
	else if(num>999) place=4;
	else if(num>99) place=3;
	else if(num>9) place=2;
	else place=1;
	printf("place=%d\n",place);
//��ÿλ����������� 
	ten_thousand=num/10000;
	thousand=num/1000%10;
	hundred=num/100%10;
	ten=num%100/10;
	indiv=num%10;
	switch(place)
	{
		case 5 :printf("%d,%d,%d,%d,%d",ten_thousand,thousand,hundred,ten,indiv);
				printf("\n��������Ϊ��");
				printf("%d,%d,%d,%d,%d",indiv,ten,hundred,thousand,ten_thousand);
				break;
		case 4 :printf("%d,%d,%d,%d",thousand,hundred,ten,indiv);
				printf("\n��������Ϊ��");
				printf("%d,%d,%d,%d",indiv,ten,hundred,thousand);
				break;
		case 3 :printf("%d,%d,%d",hundred,ten,indiv);
				printf("\n��������Ϊ��");
				printf("%d,%d,%d",indiv,ten,hundred);
				break;
		case 2 :printf("%d,%d",ten,indiv);
				printf("\n��������Ϊ��");
				printf("%d,%d",indiv,ten);
				break;
		case 1 :printf("%d",indiv);
				printf("\n��������Ϊ��");
				printf("%d",indiv);
				break;

	}
	return 0;
}
