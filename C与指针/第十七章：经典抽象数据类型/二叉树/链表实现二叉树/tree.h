//����������ģ��ӿ� 
#define		TREE_TYPE int  // ����ֵ����

//���������ֵ����ֵ����ԭ�Ȳ�������  
void insert (TREE_TYPE value); 

//�����ض�ֵ�������ֵ��Ϊ��һ��������������� 
TREE_TYPE *find(TREE_TYPE value); 

//ִ������ǰ�����,������һ���ص�����ָ�룬����ָ�ĺ����������д���ÿһ���ڵ㱻���ã� 
//�ڵ��ֵ��Ϊ�������ݸ�������� 
void pre_order_traverse(void(*callback) (TREE_TYPE value));
