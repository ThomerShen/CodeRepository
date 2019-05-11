#include <stdio.h>
/*
题目：一个 5 位数，判断它是不是回文数。即 12321 是回文数，个位与万位相同，十位与千位相同。
*/

int main()
{
	int i = 0, n, temp,flag=0;
	int a[100] = { 0 };

	printf("请输入不多于 5 位的正整数：\n");
	scanf_s("%d", &n);

	while (n > 0)
	{
		temp = n % 10;
		//if (temp != 0)
		a[i++] = temp;
		n /= 10;
	}

	for (int j = 0; j <= i - 1; j++)
	{
		flag = 0;
		if (a[j] == a[i - 1 - j])
			flag = 1;
	}
	if(flag==1)
		printf("这个数是回文数");
	else
		printf("这个数不是回文数");

	system("pause");
	return 0;
}