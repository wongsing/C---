
int 
sll_insert1(Node *current , int new_value)
{
	Node *previous;
	Node *new;
	
	while(current->value <new_value){
		previous = current ;
		current = current->link;
	}
	
	new = (Node *)malloc(sizeof(Node));
	if(new==NULL)
		return FALSE;
	new->value = new_value;
	
	new->link = current;
	previous->link = new;
	return TRUE;
}

