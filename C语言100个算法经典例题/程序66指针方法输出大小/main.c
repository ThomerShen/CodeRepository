#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}

int main()
{
	int n1, n2, n3;
	int *pointer1, *pointer2, *pointer3;

	printf("输入三个数字：\n");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	pointer1 = &n1;
	pointer2 = &n2;
	pointer3 = &n3;

	if (n1 > n2)
		swap(pointer1, pointer2);
	if (n1 > n3)
		swap(pointer1, pointer3);
	if (n2 > n3)
		swap(pointer2, pointer3);
	printf("从小到大输出：%d %d %d\n", n1, n2, n3);

	system("pause");
	return 0;
}
