#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}*pnode,node;

void list_tail_insert(pnode *head,pnode *tail,int val)
{	
	pnode pnew;
	pnew=(pnode)calloc(1,sizeof(node));
	pnew->data=val;
	//pnew->next=NULL;
	if(*head==NULL)
	{
		*head=pnew;
		*tail=pnew;
	}
	else
	{
		(*tail)->next=pnew;
		*tail=pnew;
	}
}

pnode mergelist(pnode head1,pnode head2)
{
	pnode head,tail,pcur;
	head=NULL;
	pcur=NULL;
	if(head1==NULL)
		return head=head2;
	else if(head2==NULL)
		return head=head1;
	head=head1->data<head2->data?head1:head2;
	tail=head;
	while(head1!=NULL&&head2!=NULL)
	{
		if(head1->data<head2->data)
		{
			pcur=head1;
			head1=head1->next;
			tail->next=pcur;
			tail=pcur;
			pcur->next=NULL;//尾插法
		}
		else
		{
			pcur=head2;
			head2=head2->next;
			tail->next=pcur;
			tail=pcur;
			pcur->next=NULL;//尾插法
		}
	}
	if(head1==NULL)
	{
		tail->next=head2;
		return head;
	}
	else
	{
		tail->next=head1;
		return head;
	}
}

void print_list(pnode head)
{
	while(head!=NULL)
	{
		printf("%3d",head->data);
		head=head->next;
	}
	printf("\n");
}

void main()
{
	pnode head;
	pnode phead1,ptail1,phead2,ptail2;
	int val1,val2;

	phead1=NULL;
	phead2=NULL;
	ptail1=NULL;
	ptail2=NULL;

	printf("输入第一个链表：\n");
	while(scanf("%d",&val1)!=EOF)
	{
		list_tail_insert(&phead1,&ptail1,val1);
	}
	print_list(phead1);

	printf("输入第二个链表：\n");
	while(scanf("%d",&val2)!=EOF)
	{
		list_tail_insert(&phead2,&ptail2,val2);
	}
	print_list(phead2);

	printf("合并后的链表：\n");
	head=mergelist(phead1,phead2);
	print_list(head);
	system("pause");
}