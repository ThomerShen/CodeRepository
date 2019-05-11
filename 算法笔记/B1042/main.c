#include <stdio.h>

//洗牌机器，编号1-54，分别'S','H','C','D','J' 各13张，执行定操作序列，将牌的位置改变为指定位置
#define N 5
//const int N = 54;//const 允许指定一个语义约束,告诉编译器某值是保持不变的
char mp[5] = { 'S','H','C','D','J' };
int start[N + 1], end[N + 1], next[N + 1];//next数组存放每个位置的牌在操作后的位置

int main()
{
	int k;
	printf("输入执行次数：\n");
	scanf("%d", &k);
	for (int i = 1; i <= N; i++)
	{
		start[i] = i;//初始化牌的编号
	}
	printf("输入每个位置上的牌在操作后的位置\n");
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &next[i]);
	}
	printf("转换后的序列为：\n");
	for (int step = 0; step < k; step++)
	{
		for (int i = 1; i <= N; i++)
		{
			end[next[i]] = start[i];//把第i个位置上的牌的编号放在next数组中
		}
		for (int i = 1; i <= N; i++)
		{
			start[i] = end[i];//把end数组赋值给start数组以供下次操作使用
		}
	}
	for (int i = 1; i <= N; i++)
	{
		if (i != 1)
			printf(" ");
		start[i]--;
		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);//mp[(x-1)/13]为这张牌对应的花色，(x-1)%13+1为在所属花色下的编号
	}
	system("pause");
	return 0;
}