#include <stdio.h>
#include <stdlib.h>
//���ѧ���ɼ�����ߡ���ͳɼ�
//xiaohong math001 90
//xiaoming cs002 95
//xiaohuan ee003 100

typedef struct student {
	char name[15];
	char id[15];
	int score;
}stu;

int main()
{
	int n;
	stu temp;
	stu ans_max, ans_min;
	printf("����ѧ������\n");
	scanf("%d", &n);
	ans_max.score = -1;
	ans_min.score = 101;
	printf("����ѧ�������� ѧ�� �ɼ�������\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%d", temp.name,temp.id,&temp.score); 
		//scanf_s("%s%s%d", temp.name,15, temp.id, 15,&temp.score);//����15������¼�ַ����ĳ���
		if (temp.score > ans_max.score)
			ans_max = temp;
		if (temp.score < ans_min.score)
			ans_min = temp;
	}
	printf("����ɼ���ߵ�ѧ��������ѧ�ţ�\n");
	printf("%s %s\n", ans_max.name, ans_max.id);
	printf("����ɼ���͵�ѧ��������ѧ�ţ�\n");
	printf("%s %s\n", ans_min.name, ans_min.id);
	system("pause");
	return 0;
}