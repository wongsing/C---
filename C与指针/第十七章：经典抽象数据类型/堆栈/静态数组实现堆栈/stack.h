#define STACK_TYPE int //��ջ�洢ֵ����
#define size_t int
//push ����ֵѹ���ջ 
void push(STACK_TYPE value);

//pop �Ӷ�ջ�е���һ��ֵ �������� 
void pop(void); 

//top ���ض�ջ����Ԫ��ֵ�����Զ�ջ�����޸� 
STACK_TYPE top(void);

//����ն�ջ�������棬��֮���ؼ� 
int is_empty(void);

//�����ջ���ˣ������棬��֮���ؼ� 
int is_full(void);

//������ջ������Ϊָ����ջ���Ա������Ԫ�أ��⺯���������ھ�̬���� 
void create_stack(size_t size);

//���ٶ�ջ���ͷ���ռ�ռ� 
void destory_stack(void); 
