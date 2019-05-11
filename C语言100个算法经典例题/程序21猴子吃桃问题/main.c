#include <stdio.h>
/*
猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
的一半零一个。到第 10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
1.程序分析：采取逆向思维的方法，从后往前推断。
*/
//1534
int main1()
{
	int sum = 1;
	int before_sum;

	for (int i = 9; i >= 1; i--)
	{
		before_sum = (sum + 1) * 2;
		sum = before_sum;
	}
	printf("第一天摘了%d个桃子\n", sum);

	system("pause");
	return 0;
}