void create (list **headp,int *p)
{
	list *loc_head,*tail;
	loc_head= (list *)malloc(sizeof(list));
	loc_head->data=*p;
	loc_head->next=NULL;
	tail=loc_head;
	tail->next=(list *)malloc(sizeof(list));
	tail=tail->next;
	*p++;
	while(*p)
	{
		tail->data=*p;
		tail->next=(list *)malloc(sizeof(list));
		tail=tail->next;
		*p++;
	}
	tail->data=NULL;
	tail->next=NULL;
	*headp=loc_head;
}
