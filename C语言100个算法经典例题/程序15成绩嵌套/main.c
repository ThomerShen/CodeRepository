#include <stdio.h>
/*利用条件运算符的嵌套来完成此题：学习成绩>=90 分的同学用 A 表示，60-89 分之间的用 B 表示，
60 分以下的用 C 表示。*/

int main()
{
	int n;
	char grade;

	printf("输入成绩：\n");
	scanf_s("%d", &n);
	grade = n >= 90 ? 'A' : (n >= 60 ? 'B' : 'C');//结合律，从右到左
	printf("%d是等级%c\n",n, grade);
	getchar();

	system("pause");
	return 0;
}