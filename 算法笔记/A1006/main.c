#include <stdio.h>
#include <stdlib.h>

//ǩ��ϵͳ
//CS001 08:10:00 15:30:01
//CS002 07:59:00 18:30:06
//CS003 09:00:08 17:59:00

typedef struct pNode
{
	char Id[20];
	int hh, mm, ss;
}pNode;

pNode temp, ans1, ans2;
//node1��ʱ�����node2��ʱ�䣬����1
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
	
	printf("����ǩ��������\n");
	scanf("%d", &n);
	ans1.hh = 24, ans1.mm = 60, ans1.ss = 60;//��ʼ��ǩ��ʱ��Ϊ���
	ans2.hh = 0, ans2.mm = 0, ans2.ss = 0;//��ʼ��ǩ��ʱ��Ϊ��С
	printf("����ǩ�������� ǩ��ʱ�� ǩ��ʱ��\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d:%d:%d", temp.Id, &temp.hh, &temp.mm, &temp.ss);//ǩ��
		if (great(temp, ans1) == 0)
			ans1 = temp;
		scanf("%d:%d:%d", &temp.hh, &temp.mm, &temp.ss);//ǩ��
		if (great(temp, ans2) == 1)
			ans2 = temp;
	}
	printf("����ǩ������%s ����뿪����%s\n", ans1.Id, ans2.Id);
	system("pause");
	return 0;
}