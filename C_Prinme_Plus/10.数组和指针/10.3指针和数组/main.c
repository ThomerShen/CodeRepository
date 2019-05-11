#include <stdio.h>
//指针的值是它所指向对象的地址。指针加1，指针的值递增它所指向类型的大小（以字节为单位）
//dates+2==&data[2]等价于 *(dates+2)==data[2]；*(ar+n)的意思是“到内存的ar位置，然后移动N个单元，检索存在哪里的值”
//*(dates+2) 的意思是dates第3个元素的值；*dates+2 的意思是dates第1个元素的值加2
#define MONTHS 12

int main()
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	for (index = 0; index < MONTHS; index++)
	{
		printf("Month %2d has %d days.\n", index + 1, *(days + index));
	}
	system("pause");
	return 0;
}