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

void list_head_insert(pnode *head,pnode *tail,int val)
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
		pnew->next=*head;
		*head=pnew;
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

void invertlist(pnode *head,pnode *tail)
{
	pnode newhead,newtail,pre;
	newhead=NULL;
	newtail=NULL;
	pre=NULL;

	while((*head)->next!=NULL)
	{
		pre=*head;
		while(pre->next!=*tail)//遍历到最后一个节点
		{
			pre=pre->next;
		}
		pre->next=NULL;//最后一个节点处理
		if(newhead==NULL)
		{
			newhead=*tail;
			newtail=*tail;
		}
		else
		{
			newtail->next=*tail;//尾插
			newtail=*tail;
		}
		*tail=pre;
	}
	newtail->next=*tail;
	*head=newhead;
}

void invertlist1(pnode *head,pnode *tail)
{

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
	pnode phead1,ptail1;
	int val1;

	phead1=NULL;
	ptail1=NULL;

	printf("输入链表：\n");
	while(scanf("%d",&val1)!=EOF)
	{
		list_head_insert(&phead1,&ptail1,val1);
	}
	print_list(phead1);

	printf("逆转后的链表：\n");
	invertlist(&phead1,&ptail1);
	print_list(phead1);
	system("pause");
}