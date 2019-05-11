#include <stdio.h>
#include <stdlib.h>

//签到系统
//CS001 08:10:00 15:30:01
//CS002 07:59:00 18:30:06
//CS003 09:00:08 17:59:00

typedef struct pNode
{
	char Id[20];
	int hh, mm, ss;
}pNode;

pNode temp, ans1, ans2;
//node1的时间大于node2的时间，返回1
int great(pNode node1, pNode node2)
{
	if (node1.hh != node2.hh)
		return node1.hh > node2.hh;
	if (node1.mm != node2.mm)
		return node1.mm > node2.mm;
	else
		return node1.ss > node2.ss;
}

int main()
{
	int n;
	
	printf("输入签到人数：\n");
	scanf("%d", &n);
	ans1.hh = 24, ans1.mm = 60, ans1.ss = 60;//初始化签到时间为最大
	ans2.hh = 0, ans2.mm = 0, ans2.ss = 0;//初始化签离时间为最小
	printf("输入签到人名字 签到时间 签离时间\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d:%d:%d", temp.Id, &temp.hh, &temp.mm, &temp.ss);//签到
		if (great(temp, ans1) == 0)
			ans1 = temp;
		scanf("%d:%d:%d", &temp.hh, &temp.mm, &temp.ss);//签离
		if (great(temp, ans2) == 1)
			ans2 = temp;
	}
	printf("最早签到人是%s 最迟离开人是%s\n", ans1.Id, ans2.Id);
	system("pause");
	return 0;
}