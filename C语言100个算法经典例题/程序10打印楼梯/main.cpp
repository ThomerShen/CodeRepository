#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	printf("\1\1\n");// \1 Ð¦Á³·û
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf("%c%c", 219, 219);//???
		}
		printf("\n");
	}
	getchar();
}