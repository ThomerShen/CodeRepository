#include <stdio.h>

/*
两个乒乓球队进行比赛，各出三人。甲队为 a,b,c 三人，乙队为 x,y,z 三人。已抽签决定
比赛名单。有人向队员打听比赛的名单。a 说他不和 x 比，c 说他不和 x,z 比，请编程序找出
三队赛手的名单。

a PK z
b PK x
c PK y

*/
int main()
{
	char i, j, k;//依次为a,b,c的对手
	for(i='x';i<='z';i++)//贪心法，暴力遍历
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			//if(i!=j)//排除对手重复问题
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != j&&i != k && j != k)
					{
						if (i != 'x'&&k != 'x'&&k != 'z')
							printf("对手名单为：\na PK %c\nb PK %c\nc PK %c\n", i, j, k);
					}
				}
		}
	}

	getchar();

	return 0;
}