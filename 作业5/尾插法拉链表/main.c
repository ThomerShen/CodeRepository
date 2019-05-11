#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pnode
{
	int data;
	struct pnode *next; 
}*pnode,node;

void creat_tail(pnode *head,pnode *tail)
{
	int val;
	while(fflush(stdin),scanf("%d",&val)!=EOF)
	{
		pnode p=(pnode)malloc(sizeof(node));
		p->data=val;
		p->next=NULL;
		if(*head==NULL)
		{
			*head=p;
			*tail=p;
		}
		else
		{
			(*tail)->next=p;
			*tail=p;
		}
	}
}

int main()
{
	pnode *head=NULL,*tail=NULL;
	printf("使用尾插法建立链表\n");
	creat_tail(head,tail);
	printf("");
	system("pause");
	return 0;
}
