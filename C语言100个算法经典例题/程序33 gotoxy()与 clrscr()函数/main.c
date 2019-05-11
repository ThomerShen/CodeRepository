#include <stdio.h>
#include <stdlib.h>
# include <windows.h>
#include "conio.h"
//学习 gotoxy()与 clrscr()函数

int textbackground(short iColor)
{
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	GetConsoleScreenBufferInfo(hd, &csbInfo);
	return SetConsoleTextAttribute(hd, (iColor << 4) | (csbInfo.wAttributes&~0xF0));
}

void gotoxy(int x, int y) //gotoxy 源代码
{
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*
 /*COORD是Windows API中定义的一种结构，表示一个字符在控制台屏幕上的坐标。其定义为：

	typedef struct _COORD {

	SHORT X; // horizontal coordinate

	SHORT Y; // vertical coordinate
	} COORD;*/

void main(void)
{
	//clrscr();/*清屏函数*/古老函数，非标准C函数
	
	textbackground(4);
	gotoxy(1, 1);/*定位函数*/
	printf("Output at row 1 column 1\n");
	textbackground(5);
	gotoxy(1, 2);/*定位函数*/
	printf("Output at row 1 column 2\n");
	textbackground(2);
	gotoxy(1, 5);/*定位函数*/
	printf("Output at row 5 column 1\n");
	textbackground(3);
	gotoxy(20, 10);
	printf("Output at row 10 column 20\n");
	getchar();

	system("cls");/*清屏函数*/
	system("pause");
}