#include <stdio.h>
#include <stdlib.h>
//��������Ǯ
//1��Galleon���Ի�17��Sickle��1��Sickle�һ�29��Kunt

//input:10.16.27 14.1.28
//3.2.1

const int Galleon = 17 * 29;
const int Sickle = 29;

int main()
{
	int a1, b1, c1;
	int a2, b2, c2;
	printf("����۸�ͱ�Ǯ��\n");
	scanf_s("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int price = a1 * Galleon + b1 * Sickle + c1;//������͵�Kunt��λ
	int money = a2 * Galleon + b2 * Sickle + c2;
	int change = money - price;
	if (change < 0)
	{
		printf("-");
		change = -change;
	}
	printf("����Ǯ��%d.%d.%d\n", change / Galleon, change%Galleon / Sickle, change%Sickle);
	system("pause");
	return 0;
}