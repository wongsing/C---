#include <stdio.h>
 
//const int red = 0 ;
//const int yellow = 1 ;
//const int green = 2;

enum COLOR {red=1,yellow,green=5}; 
//ö�٣����ɸ�ֵҲ�ɲ���ֵ����int���� 
int main (int argc , char const *argv[])
{
	int color = -1 ;
	char *colorName= NULL;
	
	printf("������ϲ������ɫ�Ĵ��룺");
	scanf("%d",&color);
	switch(color)
	{
	case red:colorName= "red";
	break;
	case yellow:colorName= "yellow";break;
	case green:colorName= "green";break;
	default:colorName= "unknow";break;
	}
	printf("��ϲ������ɫ��%s\n",colorName);
	
	return 0;
}
