#include <stdio.h>
//ָ���ֵ������ָ�����ĵ�ַ��ָ���1��ָ���ֵ��������ָ�����͵Ĵ�С�����ֽ�Ϊ��λ��
//dates+2==&data[2]�ȼ��� *(dates+2)==data[2]��*(ar+n)����˼�ǡ����ڴ��arλ�ã�Ȼ���ƶ�N����Ԫ���������������ֵ��
//*(dates+2) ����˼��dates��3��Ԫ�ص�ֵ��*dates+2 ����˼��dates��1��Ԫ�ص�ֵ��2
#define MONTHS 12

int main()
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	for (index = 0; index < MONTHS; index++)
	{
		printf("Month %2d has %d days.\n", index + 1, *(days + index));
	}
	system("pause");
	return 0;
}