#include <stdio.h>
#include <stdlib.h>
/*
题目：求一个 3*3 矩阵对角线元素之和
1.程序分析：利用双重 for 循环控制输入二维数组，再将 a 累加后输出
*/

int main()
{
	float a[3][3] = { 0 };
	float sum = 0;

	printf("输入数组：\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%f",&a[i][j]);
	for (int i = 0; i < 3; i++)
		sum += a[i][i];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %.2f", a[i][j]);
		}
		printf("\n");
	}

			

	printf("主对角线元素之和为：%4.2f\n", sum);

	system("pause");
	return 0;
}