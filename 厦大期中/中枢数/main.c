#include <stdio.h>
#include <stdlib.h>
//������е���������λ��
//1 2 3 2 1
//1 2 3
//1 2 -2

int main()
{
	int n,pivot=-1;
	int a[10000];
	int leftsum = 0, rightsum = 0;//��ʼ�����ҵĺ�
	printf("�������г��ȣ�\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		rightsum += a[i];//ͳ�����е��ܺ�
	}
	rightsum -= a[0];//���ֳ�ȥһ�����������е��ܺ�Ϊ0
	if (leftsum == rightsum)
		pivot = 0;
	else
	{
		for (int i = 1; i < n; i++)
		{
			leftsum += a[i-1];
			rightsum -= a[i];
			if (leftsum == rightsum)
			{
				pivot = i;
				break;
			}				
		}
	}
	printf("��������λ��Ϊ%d\n", pivot);
	system("pause");
	return 0;
}