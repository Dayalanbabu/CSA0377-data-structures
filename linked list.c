#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node*next;	
}*head=NULL,*p,*t,*newnode;

void create()
{
	int x,n,i;
	printf("enter the n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	printf("enter the values","\n");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	 newnode->data=x;
	 newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		p=newnode;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
}
}
void insert_at_begin()
{
	int x;
	printf("enter the values:","\n");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
	
}
void insert_at_end()
{
	int x;
	printf("enter the value");
	scanf("%d",& x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data= x;
	newnode->next= NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void insert_at_any_pos()
{
	int x,i,pos;
	printf("enter the value and pos");
	scanf("%d%d",& x,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;i++,p=p->next)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void delete_at_begin()
{
	int x;
	p=head;
	head=p->next;
	x=p->data;
	free(p);
	printf("the value:",x);
}
void delete_at_anyposition()
{
	int i,pos,x;
	printf("enter the postion:");
	scanf("%d",&pos);
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=p->next;
    x=p->data;
	free(p);
	printf("the value:%d",x);
}
void delete_at_end()
{
	int x;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	t->next=NULL;
	x=p->data;
	free(p);
	printf("the value:%d",x);
}
void display()
{
	if(head==NULL)
	printf("linked list is empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
int main()
{
	int ch;
	do
	{
		printf("\nMain Menu");
		printf("\n1.create\n2.insert_at_begin()\n3.insert_at_end()\n4.insert_at_any_pos()\n5.del_at_begin()\n6.del_at_anyposition\n7.del_at_end\n8.display\n9.exit\n");
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				insert_at_begin();
				break;
			case 3:
				insert_at_end();
				break;
			case 4:
				insert_at_any_pos();
				break;
			case 5:
				delete_at_begin();
				break;
			case 6:
				delete_at_anyposition();
				break;
			case 7:
				delete_at_end();
				break;	
			case 8:
				display();
				break;
			case 9:
				exit(0);
		}
	}while(ch>=1 &&ch<=9);
}

