#include <stdio.h>
//��������ʼ��
//C99������һ�������ԣ��ƶ���ʼ����	int arr[6]={[5]=211};
 
#define size 4
int main()
{
	int some_data[size] = { 1492,1066 };
	int i;
	printf("%2s%14s\n", "i", "some_data[i]");
	for (i = 0; i < size; i++)
	{
		printf("%2d%14d\n", i, some_data[i]);//���ֳ�ʼ����ʣ���Ԫ�ػᱻ��ʼ��Ϊ0
	}
	system("pause");
	return 0;
}