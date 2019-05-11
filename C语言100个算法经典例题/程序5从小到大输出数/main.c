#include <stdio.h>
#include <stdlib.h>
//输入三个数，从小到大输出

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a > b)
//		swap(&a, &b);
//	if (a > c)
//		swap(&a, &c);
//	if (b > c)
//		swap(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//
//	system("pause");
//	return 0;
//}
