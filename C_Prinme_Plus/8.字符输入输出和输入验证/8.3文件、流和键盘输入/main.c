#include <stdio.h>
#include <stdlib.h>
//文件是存储器中存储信息的区域
//C程序处理的是流而不是直接处理文件。流是一个实际输入或输出映射的理想化数据流。
//打开文件的过程就是把流与文件相关联，而且读写都是通过流来完成的。
//stdin流表示键盘输入，stdout流表示屏幕输出

//
int main()
{
	char ch;
	//while ((ch = getchar()) != '#')
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
