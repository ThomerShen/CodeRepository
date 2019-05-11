#include <stdio.h>
#include <stdlib.h>
#include "diceroll.h"
#include <time.h>

int main(void)
{
	int dice, roll;
	int sides, status;

	srand((unsigned int)time(0));//随机种子

	printf("Enter the number of sides per die,0 to stop.\n");
	while (scanf_s("%d", &sides) == 1 && sides > 0)
	{
		printf("How mang dice?\n");
		if (status = scanf_s("%d", &dice) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("You should have entered an integer.\n");
				printf("Let's begin again.\n");
				while (getchar() != '\n')
					continue;
				printf("Enter the number of sides per die,0 to stop.\n");
				continue;//进入循环的下一轮迭代
			}
		}
		roll = roll_n_dice(dice, sides);

		printf("You have rolled a %d using %d %d-sides dice.\n",roll,dice,sides);
		printf("How many sides?Enter 0 to stop.\n");
	}

	printf("The rollem() function was called %d times.\n",roll_count);
	printf("GOOD FORTUNE TO YOU!\n");

	system("pause");
	return 0;
}