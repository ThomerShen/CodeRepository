#include <stdio.h>
#include <stdlib.h>
/*
��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
1 2 3 4 5
*/

int main()
{
	int n,m;
	int a[100];

	printf("���������\n");
	scanf_s("%d", &n);
	printf("����������\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("�������m��\n");
	scanf_s("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int temp = a[n - 1];
		for (int j = n-1; j > 0; j--)
		{
			a[j] = a[j-1];		
		}	
		a[0] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}

	system("pause");
	return 0;
}