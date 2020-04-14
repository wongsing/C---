//二叉树搜索模块接口 
#define		TREE_TYPE int  // 树的值类型

//向树添加新值，其值必须原先不在树中  
void insert (TREE_TYPE value); 

//查找特定值，把这个值作为第一个参数传入给函数 
TREE_TYPE *find(TREE_TYPE value); 

//执行树的前序遍历,参数是一个回调函数指针，他所指的函数将在树中处理每一个节点被调用， 
//节点的值作为参数传递给这个函数 
void pre_order_traverse(void(*callback) (TREE_TYPE value));
