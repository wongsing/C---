#include <stdio.h>
#include <stdlib.h>
//自己编写calloc函数，函数内部是用malloc来获取内存
//二者区别是前者会将返回的void指针全部初始化为0 
void *mycalloc(int a ){
	int *p1,i;
	p1 = malloc(a*sizeof(int));
	if(p1 != NULL){
		for(i=0;i<a;i++)
			*(p1+i)=0; 	
	}
	return p1;	 
}

/*
** A function that performs the same job as the library ’calloc’ function.
*/
void *
calloc( size_t n_elements, size_t element_size )
{
	int i;
	char *new_memory;
	n_elements *= element_size;
	new_memory = malloc( n_elements );
	if( new_memory != NULL ){
	char *ptr;
	ptr = new_memory;
	for(i=0;i<n_elements;i++){
	*ptr++ = '\0';		
	}
}
	return new_memory;
}

int main()
{
	int n = 5,i;
	int *a = mycalloc(n);
	char *b ;
	b= calloc(n,4);
	for(i=0;i<n;i++)
		printf("%d\n",*(a+i));
	printf("********************\n");
	free(a);
	for(i=0;i<n;i++){
		*(b+i)=i;
		printf("%d\n",*(b+i));		
	}
	free(b);
	return 0;
}

