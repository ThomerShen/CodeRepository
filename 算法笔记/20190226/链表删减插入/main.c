#include "func.h"

void main()
{
	pstu phead=NULL,ptail=NULL;
	int i;
	float score;
	printf("请输入一组数字，Enter换行后，以Ctrl+z结束\n");
	while(scanf("%d",&i)!=EOF)
	{
		//list_head_insert(&phead,&ptail,i);
		//list_tail_insert(&phead,&ptail,i);
		list_sort_insert(&phead,&ptail,i);
	}
	list_print(phead);
	//printf("要删除的数字是：\n");
	//while(scanf("%d",&i)!=EOF)
	//{
	//	
	//	list_delete_insert(&phead,&ptail,i);
	//	printf("剩余的数字是：");
	//	list_print(phead);
	//	printf("要删除的数字是：\n");	
	//}
	//list_print(phead);
	printf("输入要修改的num和score：\n");
	while(scanf("%d%f",&i,&score)!=EOF)
	{
		
		list_print_score(phead);
		list_modify(phead,i,score);
		printf("-------修改后-------\n");
		list_print_score(phead);
		printf("输入要修改的num和score：\n");


	}
	system("pause");
}