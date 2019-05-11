#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int num;
	float score;
	struct student *pnext; 
}*pstu,stu;

void list_head_insert(pstu* ,pstu* ,int );
void list_tail_insert(pstu* ,pstu* ,int );
void list_sort_insert(pstu* ,pstu* ,int );
void list_delete_insert(pstu* ,pstu* ,int );
void list_modify(pstu ,int ,float );
pstu mergelist(pstu ,pstu );
void list_print(pstu );
void list_print_score(pstu);
