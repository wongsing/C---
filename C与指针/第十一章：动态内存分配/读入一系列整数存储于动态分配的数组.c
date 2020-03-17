#include <stdio.h>
#include <malloc.h>
#define DELTA  100
//函数分配一个数组，根据一个固定的增量对数组进行重新分配
//DELTA增量可以微调 
int *
readints()
{
	int  *array;
	int  size;
	int  count;
	int  value;
//获得初始数组,此处+1是储存数组第一个元素,数的个数 
	size = DELTA;
	array = malloc((size+1)*sizeof(int));
	if(array == NULL)
		return NULL;
//标准输入值，由EOF结束	
	count = 0;
	while(scanf("%d",&value)==1){
		count++;
//如果个数大于数组，那么就用realloc增量 
		if(count>size){
			size += DELTA;
			array = realloc (array,(size+1)*sizeof(int));
			if(array == NULL)
				return NULL;
		}
		array[count]=value;
	//	printf("%d ",array[count]);
	}
//输完值后，个数小于数组，那就再用realloc减量 
	if(count<size){
		array = realloc(array,(count+1)*sizeof(int));
		if(array == NULL)
			return NULL;
	}
	array[0] = count; //最后把总数赋给第一个元素 
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



