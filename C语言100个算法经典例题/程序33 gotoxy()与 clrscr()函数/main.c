#include <stdio.h>
#include <stdlib.h>
# include <windows.h>
#include "conio.h"
//ѧϰ gotoxy()�� clrscr()����

int textbackground(short iColor)
{
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	GetConsoleScreenBufferInfo(hd, &csbInfo);
	return SetConsoleTextAttribute(hd, (iColor << 4) | (csbInfo.wAttributes&~0xF0));
}

void gotoxy(int x, int y) //gotoxy Դ����
{
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*
 /*COORD��Windows API�ж����һ�ֽṹ����ʾһ���ַ��ڿ���̨��Ļ�ϵ����ꡣ�䶨��Ϊ��

	typedef struct _COORD {

	SHORT X; // horizontal coordinate

	SHORT Y; // vertical coordinate
	} COORD;*/

void main(void)
{
	//clrscr();/*��������*/���Ϻ������Ǳ�׼C����
	
	textbackground(4);
	gotoxy(1, 1);/*��λ����*/
	printf("Output at row 1 column 1\n");
	textbackground(5);
	gotoxy(1, 2);/*��λ����*/
	printf("Output at row 1 column 2\n");
	textbackground(2);
	gotoxy(1, 5);/*��λ����*/
	printf("Output at row 5 column 1\n");
	textbackground(3);
	gotoxy(20, 10);
	printf("Output at row 10 column 20\n");
	getchar();

	system("cls");/*��������*/
	system("pause");
}