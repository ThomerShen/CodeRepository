#include <stdio.h>
#include <stdlib.h>
//宏define 命令练习2

/*宏定义中允许包含两道衣裳命令的情形，此时必须在最右边加上"\"*/
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