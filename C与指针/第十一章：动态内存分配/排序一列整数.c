#include <stdio.h>
#include <stdlib.h>
//��ȡһ����������������������

//�ú�������'qsort'���ã����ڱȽ�����ֵ,�ú������������е� 
int
compare_integers(void const *a , void const *b)
{
	register int const *pa = a;
	register int const *pb = b;
	
	return *pa > *pb ? 1 : *pa < *pb ? -1 : 0; 
	//1����һ��Ԫ�ش��ڵڶ�����0��ȣ�����С�� 
}

int 
main()
{
	int *array;
	int n_values;
	int i;
	//�۲��м������� 
	printf("How many values are there? ");
	if(scanf("%d",&n_values)!= 1 || n_values <= 0 ){
		printf("Illegal number of values.\n");
		exit(EXIT_FAILURE);
	}
	//�����ڴ�,���Ҽ��鷵�ص��Ƿ�ΪNULL���ڴ治�� 
	array = malloc (n_values * sizeof(int));
	if( array == NULL){
		printf("Can't get memory for that many values.\n");
		exit(EXIT_FAILURE);
	}
	//�����뵽���ڴ�ռ�������ֵ 
	for(i = 0;i<n_values;i++){
		printf("? ");
		if(scanf("%d", array + i) != 1){
			printf("Error reading value #%d\n",i);
			free( array );
			exit(EXIT_FAILURE);
		}
	}
	//����Щ���������� 
	qsort( array,n_values,sizeof(int),compare_integers);
	//��ӡ��Щ�� 
	for(i=0;i<n_values; i++)
		printf("%d\n",array[i]);
	//����ͷ��ڴ� 
	free(array);
	return EXIT_SUCCESS;
}
