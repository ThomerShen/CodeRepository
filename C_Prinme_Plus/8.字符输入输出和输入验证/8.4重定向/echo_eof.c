#include <stdio.h>
#include <stdlib.h>
//重定向输入让程序使用文件而不是键盘来输入，重定向输出让程序输出至文件而不是屏幕
//prog是可执行程序名，file1和file2文件名
//把输出重定向至文件 prog>file1
//把输入重定向至文件 prog<file2
//组合重定向：prog<file2>file1或者prog>file1<file2

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
