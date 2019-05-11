#include <stdio.h>
#include <stdlib.h>
// static 定义静态变量
void func()
{
	int var = 1;
	static int static_var = 1;//只在编译时被初始化一次

	printf("var= %d \n", var++);
	printf("static var= %d \n", static_var++);
	printf("\n");
}
//静态变量static_var保存了它被递增1后的值，但var变量每次都是1.每次调用
//func()函数都会初始化var，但是static_var只在编译时被初始化一次。

void main()
{
	for (int i = 1; i <= 3; i++)
	{
		printf("调用次数：%d\n", i);
		func();
	}
	getchar();
}