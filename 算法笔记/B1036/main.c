#include <stdio.h>
#include <stdlib.h>
//���Ů������߷ֺ���������ͷֵ���Ϣ����������ǵĲ�
//wang M 001 99
//feng F 002 80
//peng F 002 100

struct person
{
	char name[15];
	char id[15];
	int score;
}M,F,temp;

int main()
{
	int n;
	char gender;
	M.score = 101, F.score = -1;
	printf("����ѧ��������\n");
	scanf("%d", &n);
	printf("�ֱ�����ѧ������ �Ա� ѧ�� ����\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %c%s%d", temp.name, &gender,temp.id, &temp.score);
		if (gender == 'M'&&temp.score < M.score)
			M = temp;
		else if (gender == 'F'&&temp.score > F.score)
			F = temp;
	}
	if (F.score == -1)
		printf("Absent\n");
	else
		printf("%s %s\n", F.name, F.id);
	if (M.score == 101)
		printf("Absent\n");
	else
		printf("%s %s\n", M.name, M.id);
	if (M.score == 101 || F.score == -1)
		printf("NA\n");
	else
		printf("%d\n", F.score - M.score);
	system("pause");
	return 0;
}