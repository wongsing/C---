#include <stdio.h>
#include <malloc.h>
#define DELTA  100
//��������һ�����飬����һ���̶�������������������·���
//DELTA��������΢�� 
int *
readints()
{
	int  *array;
	int  size;
	int  count;
	int  value;
//��ó�ʼ����,�˴�+1�Ǵ��������һ��Ԫ��,���ĸ��� 
	size = DELTA;
	array = malloc((size+1)*sizeof(int));
	if(array == NULL)
		return NULL;
//��׼����ֵ����EOF����	
	count = 0;
	while(scanf("%d",&value)==1){
		count++;
//��������������飬��ô����realloc���� 
		if(count>size){
			size += DELTA;
			array = realloc (array,(size+1)*sizeof(int));
			if(array == NULL)
				return NULL;
		}
		array[count]=value;
	//	printf("%d ",array[count]);
	}
//����ֵ�󣬸���С�����飬�Ǿ�����realloc���� 
	if(count<size){
		array = realloc(array,(count+1)*sizeof(int));
		if(array == NULL)
			return NULL;
	}
	array[0] = count; //��������������һ��Ԫ�� 
	return array;
}

int main()
{
	int i , *p,n;
	p = readints();
	n = *p;
	for(i=0;i<=n;i++){
		printf("%d\n",*(p+i));
	}
	return 0;
}



