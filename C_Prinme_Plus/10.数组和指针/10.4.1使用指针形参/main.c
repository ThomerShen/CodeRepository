#include <stdio.h>
//求数组元素之和 199
#define SIZE 10
int sump(int *start, int *end);

int main(void)
{
	int marbles[SIZE] = { 20,10,5,33,24,55,12,12,13,15 };//marbles的大小是40字节，含有10个Int类型的值，每个值占4个字节
	long answer;

	answer = sump(marbles, marbles+SIZE);//marbles+SIZE指向数组末尾的下一个位置
	printf("The total number of marbles id %ld.\n", answer);
	system("pause");
	return 0;
}

int sump(int *start, int *end)
{
	int total = 0;
	while (start < end)//end指向的位置实际上在数组最后一个元素的后面
	{
		total += *start++;//指针start先递增后指向，相当于先把指针指向的值加到total上，然后再递增指针
		//total += *++start;//和上面相反，先指向后递增
		//total += (*start)++;//先使用start指向的值，再递增该值
		//start++;
	}
	return total;
}