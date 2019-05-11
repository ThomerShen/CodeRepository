#include <stdio.h>
//求数组元素之和 199
//改程序打印原始数组的大小和该数组的函数形参的大小
#define SIZE 10
int sum(int ar[], int n);
int main()
{
	int marbles[SIZE] = { 20,10,5,33,24,55,12,12,13,15 };//marbles的大小是40字节，含有10个Int类型的值，每个值占4个字节
	long answer;

	answer = sum(marbles, SIZE);

	printf("The total number of marbles id %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof marbles);//转换说明%zd打印sizeof返回值
	system("pause");
	return 0;
}

int sum(int ar[], int n)//求数组的大小，ar形参
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);//ar不是数组本身，它是一个指向marbles数组首元素的指针，系统中用8字节来存储地址，故ar为8个字节
	return total;
}