#include <stdio.h>
#include <stdlib.h>
//读取一列整数，并将其升序排列

//该函数是由'qsort'调用，用于比较整型值,该函数是升序排列的 
int
compare_integers(void const *a , void const *b)
{
	register int const *pa = a;
	register int const *pb = b;
	
	return *pa > *pb ? 1 : *pa < *pb ? -1 : 0; 
	//1：第一个元素大于第二个；0相等；负数小于 
}

int 
main()
{
	int *array;
	int n_values;
	int i;
	//观察有几个整数 
	printf("How many values are there? ");
	if(scanf("%d",&n_values)!= 1 || n_values <= 0 ){
		printf("Illegal number of values.\n");
		exit(EXIT_FAILURE);
	}
	//分配内存,并且检验返回的是否为NULL，内存不足 
	array = malloc (n_values * sizeof(int));
	if( array == NULL){
		printf("Can't get memory for that many values.\n");
		exit(EXIT_FAILURE);
	}
	//向申请到的内存空间输入数值 
	for(i = 0;i<n_values;i++){
		printf("? ");
		if(scanf("%d", array + i) != 1){
			printf("Error reading value #%d\n",i);
			free( array );
			exit(EXIT_FAILURE);
		}
	}
	//对这些数进行排序 
	qsort( array,n_values,sizeof(int),compare_integers);
	//打印这些数 
	for(i=0;i<n_values; i++)
		printf("%d\n",array[i]);
	//最后释放内存 
	free(array);
	return EXIT_SUCCESS;
}
