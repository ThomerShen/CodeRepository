#include "stdio.h"
#include "conio.h"

void main(void)
{
	int color;
	for (color = 1; color < 16; color++)
	{
		//SetTextColor(color);
		//textcolor(color);/*�����ı���ɫ*/ //���Ϻ���
		printf("This is color %d\r\n", color);
	}
	//textcolor(128 + 15);
	printf("This is blinking\r\n");
	getchar();
}