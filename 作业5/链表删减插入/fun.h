#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int num;
	float score;
	struct student *pnext; 
}*pstu,stu;

void list_head_insert(pstu*head,pstu*,int);
void list_print(pstu phead);