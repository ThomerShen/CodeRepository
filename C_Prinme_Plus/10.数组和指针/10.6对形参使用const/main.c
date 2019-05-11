#include <stdio.h>
//const可以保护数组的元素不被修改，
//指向const的指针通常用于函数形参中，表明该函数不会使用指针修改数据
//把const数据或者非const数据的地址初始化为指向const的指针或为其赋值是合法的
//然后，只能把非const数据得地址赋值为普通的指针
//const可以声明并初始化一个不能指向别处的指针，可以用这种指针修改它所指向的值，但它只能指向初始化时设置的值
//在创建指针时，可以使用const两次，该指针既不能修改它所指向的最低值，也不能修改指向地址上的值

#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);

int main(void)
{
	double dip[SIZE] = { 20.0,17.66,8.2,15.3,22.22 };

	printf("The original dip array :\n");
	show_array(dip,SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);
	system("pause");
	return 0;
}
//显示数组的内容
void show_array(const double ar[], int n)
{
	int i;
	for (i = 0; i < SIZE; i++)
		printf("%8.3f", ar[i]);
	putchar('\n');
}
//把数组中的每一个元素都乘以相同的数值，不带const，允许修改数组中的元素
void mult_array(double ar[], int n, double mult)
{
	int i;
	for (i = 0; i < SIZE; i++)
		ar[i] *= mult;
}