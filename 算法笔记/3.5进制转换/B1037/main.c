#include <stdio.h>
#include <stdlib.h>
//买东西找零钱
//1个Galleon可以换17个Sickle，1个Sickle兑换29个Kunt

//input:10.16.27 14.1.28
//3.2.1

const int Galleon = 17 * 29;
const int Sickle = 29;

int main()
{
	int a1, b1, c1;
	int a2, b2, c2;
	printf("输入价格和本钱：\n");
	scanf_s("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int price = a1 * Galleon + b1 * Sickle + c1;//化成最低的Kunt单位
	int money = a2 * Galleon + b2 * Sickle + c2;
	int change = money - price;
	if (change < 0)
	{
		printf("-");
		change = -change;
	}
	printf("找零钱：%d.%d.%d\n", change / Galleon, change%Galleon / Sickle, change%Sickle);
	system("pause");
	return 0;
}