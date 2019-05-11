#include <stdio.h>
#include <stdlib.h>

//malloc()��free()�ɶԳ���
//calloc()
int main()
{
	double *ptd;
	int max, number, i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf_s("%d", &max) != 1)
	{
		puts("Number not correctly entered--bye.");
		exit(EXIT_FAILURE);
	}

	ptd = (double*)malloc(max * sizeof(double));//��̬�����ڴ�
	//ptd=(double*)calloc(5,sizeof(double));//���԰ѿ��ڵ�����λ�ö�����Ϊ0
	if (ptd == NULL)
	{
		puts("Memory allocation failed.Goodbye.");
		exit(EXIT_FAILURE);
	}

	puts("Enter the values(q to quit):");
	while (i < max&&scanf_s("%lf", &ptd[i]) == 1)
	{
		++i;
	}

	printf("Here are your %d entries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);//�����ͷ��ڴ�

	system("pause");
	return 0;
}