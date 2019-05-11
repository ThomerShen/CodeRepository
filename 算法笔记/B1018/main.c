#include <stdio.h>

//A B猜拳，B布 C锤 J剪刀
int change(char c)
{
	if (c == 'B') return 0; //B布 C锤 J剪刀
	if (c == 'C') return 1;
	if (c == 'J') return 2;
}

int main()
{
	char mp[3] = { 'B','C','J' };
	int i, n;
	int times_A[3] = { 0 }, times_B[3] = { 0 };//获胜情况
	int hand_A[3] = { 0 }, hand_B[3] = { 0 };//次数纪录
	char c1, c2;
	int k1, k2;

	printf("输入次数：\n");
	scanf("%d", &n);


	for (i = 0; i < n; i++)
	{
		getchar();
		scanf("%c %c", &c1, &c2);
		k1 = change(c1);
		k2 = change(c2);

		if ((k1 + 1) % 3 == k2)//A赢B负
		{
			times_A[0]++;
			times_B[2]++;
			hand_A[k1]++;
		}
		else if (k1 == k2)//平手
		{
			times_A[1]++;
			times_B[1]++;
		}
		else {
			times_A[2]++;//A负B赢
			times_B[0]++;
			hand_B[k2]++;
		}
	}
	printf("%d%d%d\n", times_A[0], times_A[1], times_A[2]);
	printf("%d%d%d\n", times_B[0], times_B[1], times_B[2]);

	int id1 = 0, id2 = 0;
	for (i = 0; i < 3; i++)
	{
		if (hand_A[i] > hand_A[id1])
			id1 = i;
		if (hand_B[i] > hand_B[id2])
			id2 = i;
	}
	printf("%c%c\n", mp[id1], mp[id2]);
	system("pause");
	return 0;
}
