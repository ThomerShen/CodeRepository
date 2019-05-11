#include "fun.h"

void main()
{
	pstu phead=NULL,ptail=NULL;
	int i;
	while(scanf("%d",&i)!=EOF)
	{
	list_head_insert(&phead,&ptail,i);
	}
	list_print(phead);
	system("pause");
}