#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
typedef struct listing {
	int data;
	struct listing *next;
}list;
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
int main (void)
{
	int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *a0=&a[0];
	int i=1;
	list *head;
	create (&head,a);
	while(head->data){
	printf ("%d",head->data);
	head=head->next;
	}
return 0;
}

