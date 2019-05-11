#include <stdio.h>
#include <stdlib.h>
//输出特殊图形？不知道什么鬼
int main()
{
	char a ='a', b = 'b';
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	getchar();

}