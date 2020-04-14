#include <stdlib.h>
#define		QUEUE_TYPE	int //队列元素的类型
#define		size_t		int
//创建队列，参数为存储元素的最大数量，只能动态分配数组的队列使用 
void create_queue(size_t size);

//摧毁队列，只适用于链式和动态分配数组的队列
void destory_queue(void);

//向队列添加元素 
void insert(QUEUE_TYPE value); 
 
//从队列删除一个元素并且丢弃 
void delete(void);

//返回队列第一个元素值，但不修改队列本身 
QUEUE_TYPE first(void);

//如果队列为空，返回真，反之返回假 
int is_empty(void);

//如果队列已满，返回真，反之返回假 
int is_full(void);
