#include <stdio.h>
#include <stdlib.h>
int repeat_num(int array[])
{
	int i;
	long sum=0;
	for(i=0;i<=1000;i++)
		sum=sum+array[i]-i;
	return sum;
}
int main()
{
	int array[1001];
	int num;
	int i;
	for(i=0;i<500;i++)
		array[i]=i+1;
	array[i++]=500;
	for(;i<1001;i++)
		array[i]=i;
	num=repeat_num(array);
	printf("%d\n",num);
	system("pause"):
	return 0;
}