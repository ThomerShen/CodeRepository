#include "func.h"

void main()
{
	pstu phead=NULL,ptail=NULL;
	int i;
	float score;
	printf("������һ�����֣�Enter���к���Ctrl+z����\n");
	while(scanf("%d",&i)!=EOF)
	{
		//list_head_insert(&phead,&ptail,i);
		//list_tail_insert(&phead,&ptail,i);
		list_sort_insert(&phead,&ptail,i);
	}
	list_print(phead);
	//printf("Ҫɾ���������ǣ�\n");
	//while(scanf("%d",&i)!=EOF)
	//{
	//	
	//	list_delete_insert(&phead,&ptail,i);
	//	printf("ʣ��������ǣ�");
	//	list_print(phead);
	//	printf("Ҫɾ���������ǣ�\n");	
	//}
	//list_print(phead);
	printf("����Ҫ�޸ĵ�num��score��\n");
	while(scanf("%d%f",&i,&score)!=EOF)
	{
		
		list_print_score(phead);
		list_modify(phead,i,score);
		printf("-------�޸ĺ�-------\n");
		list_print_score(phead);
		printf("����Ҫ�޸ĵ�num��score��\n");


	}
	system("pause");
}