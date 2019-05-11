#include <stdio.h>

int main()
{
	int guess = 1;
	char response;

	printf("Pick an integer from 1 to 100.I will guess ");
	printf("it\nRespond with a y if my guess is right and with ");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number is 1?\n");

	while ((response=getchar()) != 'y')
	{
		if (response == 'n')
			printf("Well,then,is it %d?\n", ++guess);
		else
			printf("Sorry,I understand only y or n.\n");
		while (getchar() != '\n')
			continue;
	}
		
	printf("I knew I could do it!\n");

	system("pause");
	return 0;
}