#include <stdlib.h>
#define		QUEUE_TYPE	int //����Ԫ�ص�����
#define		size_t		int
//�������У�����Ϊ�洢Ԫ�ص����������ֻ�ܶ�̬��������Ķ���ʹ�� 
void create_queue(size_t size);

//�ݻٶ��У�ֻ��������ʽ�Ͷ�̬��������Ķ���
void destory_queue(void);

//��������Ԫ�� 
void insert(QUEUE_TYPE value); 
 
//�Ӷ���ɾ��һ��Ԫ�ز��Ҷ��� 
void delete(void);

//���ض��е�һ��Ԫ��ֵ�������޸Ķ��б��� 
QUEUE_TYPE first(void);

//�������Ϊ�գ������棬��֮���ؼ� 
int is_empty(void);

//������������������棬��֮���ؼ� 
int is_full(void);
