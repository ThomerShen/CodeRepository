#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	int ch;
	int rows, cols;
	int flag = 0;

	printf("Enter a character and tow integers:\n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf_s("%d %d", &rows, &cols) != 2)
		{
			//while ((ch = getchar()) != '\n')
			//	putchar(ch);
			printf("This is not an integer.\nPlease enter an ");
			printf("integer value,such as 2,3,or 10:\n ");
			flag = 1;
		}
		//break;

		while (getchar() != '\n')
			continue;
		if (flag == 0)
		{
			display(ch, rows, cols);
			printf("Enter another character and tow integers:\n");
			printf("Enter a newline to quit.\n");
		}
		flag = 0;
	}
	printf("Bye.\n");

	system("pause");
	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');//结束一行并开始新的一行
	}
}