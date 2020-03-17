#include <stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4]);   
	float *p;
	int i , j;
	for(i=0;i<3;i++){
		p=search(score+i);
		if(p==*(score+i)){  //若p的地址不是null，而是与返回的地址相同，那么输出不合格学生的信息 
			printf("No.%d score:",i);
		for(j=0;j<4;j++)
			printf("%5.2f ",*(p+j));
		
		printf("\n");
		}
	}
	return 0;
}

//定义一个返回类型是指针的函数，形参是指向一维数组的指针 
float *search(float(*pointer)[4])
{
	int i =0;
	float *pt;
	pt = NULL;  //作为及格的标志 
	for(;i<4;i++){
			if(*(*pointer+i)<60) pt=*pointer;   //如果有一科不及格，则将pt指向score[i][0]
			//(*pointer+i)--->score[0][i]
		}
	return pt;	
}	

