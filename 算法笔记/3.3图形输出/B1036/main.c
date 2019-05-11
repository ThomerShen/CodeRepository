#include <stdio.h>
#include <stdlib.h>
//奥巴马编程 找出图形的排布规律，得到公式
int main()
{
	int row, col;
	char c;
	printf("输入打印的列数和字符：\n");
	scanf("%d %c", &col, &c);
	if (col % 2 == 1)
		row = col / 2 + 1;
	else 
		row = col / 2 ;
	//第一行打印
	for (int i = 0; i < col; i++)
		printf("%c", c);
	printf("\n");
	//第2~row-1行打印
	for (int i = 2; i < row; i++)
	{
		printf("%c", c);
		for (int j = 0; j < col - 2; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}
	//第row行打印
	for (int i = 0; i < col; i++)
		printf("%c", c);
	system("pause");
	return 0;
}