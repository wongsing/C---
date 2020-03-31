int 
sll_insert3(register Node **linkp , int new_value)
{
	register Node *current;
	register Node *new;
	
	while((current = *linkp)!= NULL &&current->value <new_value){
		linkp = &current->link;
	}
	
	new = (Node *)malloc(LEN);
	if(new==NULL)
		return FALSE;
	new->value = new_value;
	
	new->link = current;
	*linkp=new;
	return TRUE;
}
