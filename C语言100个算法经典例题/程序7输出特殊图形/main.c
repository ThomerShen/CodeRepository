#include <stdio.h>
#include <stdlib.h>
//�������ͼ�Σ���֪��ʲô��
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