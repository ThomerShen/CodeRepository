#include <stdio.h>
#include <stdlib.h>
//Ê²Ã´¹í£¿
int main()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				printf("%c%c", 66, 87);
			else
				printf(" ");
			
		}
		printf("\n");
	}
	getchar();
}