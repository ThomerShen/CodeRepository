#include <stdio.h>
#include <stdlib.h>
//人口普查 
//wang 2001/05/12
//feng 1995/03/01
//sun 1864/09/18
//li 1773/12/30

typedef struct person {
	char name[100];
	int yy, mm, dd;
}person;

person oldest, youngest, left, right, temp;

void init()
{
	youngest.yy = left.yy = 1819;
	oldest.yy = right.yy = 2019;
	youngest.mm = oldest.mm = left.mm = right.mm = 3;
	youngest.dd = oldest.dd = left.dd = right.dd = 2;
}

int lessEpu(person a,person b)
{
	if (a.yy != b.yy)
		return a.yy <= b.yy;
	else if (a.mm != b.mm)
		return a.mm <= b.mm;
	else
		return a.dd <= b.dd;
}

int moreEpu(person a, person b)
{
	if (a.yy != b.yy)
		return a.yy >= b.yy;
	else if (a.mm != b.mm)
		return a.mm >= b.mm;
	else
		return a.dd >= b.dd;
}

int main()
{
	init();
	int n, num = 0;
	printf("输入人数：\n");
	scanf_s("%d", &n);
	printf("分别输入姓名 年/月/日：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if (lessEpu(temp, right) && moreEpu(temp, left))
		{
			num++;
			if (lessEpu(temp, oldest))
				oldest = temp;
			if (moreEpu(temp, youngest))
				youngest = temp;
		}	
	}
	if (num == 0)
		printf("0\n");
	else
		printf("符合人数%d 最长者%s 最小者%s\n", num, oldest.name, youngest.name);
	system("pause");
	return 0;
}