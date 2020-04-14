#define STACK_TYPE int //堆栈存储值类型
#define size_t int
//push 把新值压入堆栈 
void push(STACK_TYPE value);

//pop 从堆栈中弹出一个值 将其抛弃 
void pop(void); 

//top 返回堆栈顶部元素值，不对堆栈进行修改 
STACK_TYPE top(void);

//如果空堆栈，返回真，反之返回假 
int is_empty(void);

//如果堆栈满了，返回真，反之返回假 
int is_full(void);

//创建堆栈，参数为指定堆栈可以保存多少元素，这函数不能用于静态数组 
void create_stack(size_t size);

//销毁堆栈，释放所占空间 
void destory_stack(void); 
