#include "func.h"
//头插法 逆序
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
//尾插法 正序
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

//有序插入
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
		*pptail=pnew;//不可以把*pphead换成pcur
		*pphead=pnew;
	}
	else if(i<(*pphead)->num)//头插
	{
		pnew->pnext=*pphead;
		*pphead=pnew;
	}
	else//判断是否插在中间位置
	{
		while(pcur!=NULL)
		{
			if(i<pcur->num)//进行遍历，第一次不会发生
			{
				ppre->pnext=pnew;//新节点插入
				pnew->pnext=pcur;
				break;
			}
			ppre=pcur;
			pcur=pcur->pnext;
		}
		if(NULL==pcur)//最后尾部插入节点
		{
			(*pptail)->pnext=pnew;//尾插法 ppre->pnext=pnew;
			*pptail=pnew;
		}
	}
}
//删除
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
		if(NULL==*pphead)//删除一个节点后，链表为空
		{
			*pptail=NULL;
		}
		free(pcur);
	}else{//删除中间或尾部
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
		if(pcur==*pptail)//删除的是尾节点 NULL==pcur->pnext
		{
			*pptail=ppre;
		}
		if(NULL==pcur)//不存在链表中
		{
			printf("this node is not in List\n");
		}else{
			free(pcur);
		}
	}
}
//修改分数
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
//合并
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
			pcur->pnext=NULL;//尾插法
		}
		else
		{
			pcur=head2;
			head2=head2->pnext;
			tail->pnext=pcur;
			tail=pcur;
			pcur->pnext=NULL;//尾插法
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
//打印学号
void list_print(pstu phead)
{
	while(phead!=NULL)
	{
		printf("%3d",phead->num);
		phead=phead->pnext;
	}
	printf("\n");
}
//打印分数
void list_print_score(pstu phead)
{
	while(phead!=NULL)
	{
		printf("%3d %5.2f\n",phead->num,phead->score);
		phead=phead->pnext;
	}
	//printf("\n");
}