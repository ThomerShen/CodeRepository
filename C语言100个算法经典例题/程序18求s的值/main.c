#include <stdio.h>
/*
�� s=a+aa+aaa+aaaa+aa...a ��ֵ������ a ��һ�����֡����� 2+22+222+2222+22222(��ʱ
���� 5 �������)������������ɼ��̿��ơ�

����������ؼ��Ǽ����ÿһ���ֵ
*/
int main()
{
	int n;
	int sum = 0,sum_a=0;
	int a;

	printf("����aֵ��nֵ��\n");
	scanf_s("%d%d",&a, &n);
	
	for (int i = 1; i <= n; i++)
	{
		sum_a += a;
		sum += sum_a;
		a = a * 10;
	}
	printf("a+aa+...+aa..aa= %d\n", sum);

	system("pause");
	return 0;
}