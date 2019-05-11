#include <stdio.h>
#include <stdlib.h>
//座位号查询
//10120150912233 2 4 
//10120150912234 3 5 
//10120150912235 4 6 
//10120150912236 5 7

const int maxn = 1010;
//const int testseat[maxn];

struct student {
	long long id;
	int examseat;
}testseat[1010];
//准考证号 试机座位号 考试座位号
int main()
{
	int n, m, seat, examseat;
	long long id;
	printf("输入考生数：\n");
	scanf_s("%d", &n);
	printf("准考证号 试机座位号 考试座位号：\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lld%d%d", &id, &seat, &examseat);
		testseat[seat].id = id;
		testseat[seat].examseat = examseat;
	}
	printf("输入查询数：\n");
	scanf_s("%d", &m);
	printf("输入要查询的试机座位号：\n");
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d", &seat);
		printf("%lld %d\n", testseat[seat].id, testseat[seat].examseat);
	}
	system("pause");
	return 0;
}