#include <stdio.h>
#include <stdlib.h>
//A、B、C三艘船要同时发21发礼炮，A每5秒放1响，B每6秒，C每7秒，统计观众听到的响声
//求最小公约数问题
int main()
{
	int t, count = 0;
	for (t = 0; t <= 20 * 7; t++)//统计最大的发射时间
	{
		if (t % 5 == 0 && t <= 20 * 5)
		{
			count++;
			continue;
		}
		if (t % 6 == 0 && t <= 20 * 6)
		{
			count++;
			continue;
		}
		if (t % 7 == 0)
		{
			count++;
		}
	}
	printf("观众听到的响声为：%d\n", count);
	system("pause");
	return 0;
}