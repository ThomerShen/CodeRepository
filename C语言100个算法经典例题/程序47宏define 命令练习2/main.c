#include <stdio.h>
#include <stdlib.h>
//��define ������ϰ2

/*�궨���������������������������Σ���ʱ���������ұ߼���"\"*/
#define exchange(a,b) { \
int t;\
t=a;\
a=b;\
b=t;\
}
void main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d; y=%d\n", x, y);
	exchange(x, y);
	printf("x=%d; y=%d\n", x, y);
	getch();
}