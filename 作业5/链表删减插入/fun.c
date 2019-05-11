#include "fun.h"
//ͷ�巨
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

void list_print(pstu phead)
{
	while(phead!=NULL)
	{
		printf("%3d",phead->num);
		phead=phead->pnext;
	}
}