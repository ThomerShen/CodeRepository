#include <stdio.h>
//数组必须初始化
//C99，新增一个新特性：制定初始化器	int arr[6]={[5]=211};
 
#define size 4
int main()
{
	int some_data[size] = { 1492,1066 };
	int i;
	printf("%2s%14s\n", "i", "some_data[i]");
	for (i = 0; i < size; i++)
	{
		printf("%2d%14d\n", i, some_data[i]);//部分初始化，剩余的元素会被初始化为0
	}
	system("pause");
	return 0;
}