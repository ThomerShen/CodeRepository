#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	a = 234;
	b = ~a;
	printf("The a's 1 complement(decimal) is %d \n", b);
	printf("The a's 1 complement(hexidecimal) is %08x \n", a);
	a = ~a;
	printf("The a's 1 complement(hexidecimal) is %x \n", a);
	system("pause");
	return 0;
}