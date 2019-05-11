#include "func.h"
//ͷ�巨 ����
void list_head_insert(pstu* pphead,pstu* pptail,int i)
{
	pstu pnew;
	pnew=(pstu)malloc(sizeof(stu));
	memset(pnew,0,sizeof(stu));
	pnew->num=i;
	if(*pphead==NULL)
	{
		*pphead=pnew;
		*pptail=pnew;
	}
	else
	{
		pnew->pnext=*pphead;
		*pphead=pnew;
	}
}
//β�巨 ����
void list_tail_insert(pstu* pphead,pstu* pptail,int i)
{
	pstu pnew;
	pnew=(pstu)calloc(1,sizeof(stu));
	pnew->num=i;
	if(*pptail==NULL)
	{
		*pptail=pnew;
		*pphead=pnew;
	}
	else
	{
		(*pptail)->pnext=pnew;
		*pptail=pnew;
	}
}

//�������
void list_sort_insert(pstu* pphead,pstu* pptail,int i)
{
	pstu pnew;
	pstu pcur;
	pstu ppre;
	pnew=(pstu)calloc(1,sizeof(stu));
	pnew->num=i;
	pcur=*pphead;
	if(*pphead==NULL)
	{
		*pptail=pnew;//�����԰�*pphead����pcur
		*pphead=pnew;
	}
	else if(i<(*pphead)->num)//ͷ��
	{
		pnew->pnext=*pphead;
		*pphead=pnew;
	}
	else//�ж��Ƿ�����м�λ��
	{
		while(pcur!=NULL)
		{
			if(i<pcur->num)//���б�������һ�β��ᷢ��
			{
				ppre->pnext=pnew;//�½ڵ����
				pnew->pnext=pcur;
				break;
			}
			ppre=pcur;
			pcur=pcur->pnext;
		}
		if(NULL==pcur)//���β������ڵ�
		{
			(*pptail)->pnext=pnew;//β�巨 ppre->pnext=pnew;
			*pptail=pnew;
		}
	}
}
//ɾ��
void list_delete_insert(pstu* pphead,pstu* pptail,int d)
{
	pstu ppre,pcur;
	ppre=*pphead;
	pcur=*pphead;
	if(NULL==pcur)//*pphead==NULL
	{
		printf("List is empty\n");
		return;
	}else if(pcur->num==d)
	{
		*pphead=pcur->pnext;//*pphead=(*pphead)->pnext;
		if(NULL==*pphead)//ɾ��һ���ڵ������Ϊ��
		{
			*pptail=NULL;
		}
		free(pcur);
	}else{//ɾ���м��β��
		while(pcur!=NULL)
		{
			if(pcur->num==d)
			{
				ppre->pnext=pcur->pnext;
				break;
			}
			ppre=pcur;
			pcur=pcur->pnext;
		}
		if(pcur==*pptail)//ɾ������β�ڵ� NULL==pcur->pnext
		{
			*pptail=ppre;
		}
		if(NULL==pcur)//������������
		{
			printf("this node is not in List\n");
		}else{
			free(pcur);
		}
	}
}
//�޸ķ���
void list_modify(pstu pphead,int i,float score)
{
	while(NULL!=pphead)
	{
		if(i==pphead->num)
		{
			pphead->score=score;
			break;
		}
		pphead=pphead->pnext;
	}
	if(pphead==NULL)
	{
		printf("this num is not in list\n");
	}
}
//�ϲ�
pstu mergelist(pstu head1,pstu head2)
{
	pstu head,tail,pcur;
	head=NULL;pcur=NULL;
	if(head1==NULL)
		return head=head2;
	else if(head2==NULL)
		return head=head1;
	head=head1->num<head2->num?head1:head2;
	tail=head;
	while(head1!=NULL&&head2!=NULL)
	{
		if(head1->num<head2->num)
		{
			pcur=head1;
			head1=head1->pnext;
			tail->pnext=pcur;
			tail=pcur;
			pcur->pnext=NULL;//β�巨
		}
		else
		{
			pcur=head2;
			head2=head2->pnext;
			tail->pnext=pcur;
			tail=pcur;
			pcur->pnext=NULL;//β�巨
		}
	}
	if(head1==NULL)
	{
		tail->pnext=head2;
		return head;
	}
	else
	{
		tail->pnext=head1;
		return head;
	}
}
//��ӡѧ��
void list_print(pstu phead)
{
	while(phead!=NULL)
	{
		printf("%3d",phead->num);
		phead=phead->pnext;
	}
	printf("\n");
}
//��ӡ����
void list_print_score(pstu phead)
{
	while(phead!=NULL)
	{
		printf("%3d %5.2f\n",phead->num,phead->score);
		phead=phead->pnext;
	}
	//printf("\n");
}