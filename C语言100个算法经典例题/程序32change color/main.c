#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
# include <windows.h>

/*
Press any key to change color, do you want to try it. Please hurry up!
*/

int textbackground(short iColor)
{
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	GetConsoleScreenBufferInfo(hd, &csbInfo);
	return SetConsoleTextAttribute(hd, (iColor << 4) | (csbInfo.wAttributes&~0xF0));
}

int main()
{
	int color;

	for (color = 0; color < 8; color++)
	{
		textbackground(color);
		printf("This is color%d\r\n", color);
		printf("Press an key to continue\r\n");
		//getch();
	}
	getchar();
	return 0;
}