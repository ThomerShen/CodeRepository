#include <stdio.h>
#include <stdlib.h>
//#if #ifdef 和#ifndef 的综合应用
/*
#define            定义一个预处理宏
#undef            取消宏的定义

#if                   编译预处理中的条件命令，相当于C语法中的if语句
#ifdef              判断某个宏是否被定义，若已定义，执行随后的语句
#ifndef            与#ifdef相反，判断某个宏是否未被定义
#elif                若#if, #ifdef, #ifndef或前面的#elif条件不满足，则执行#elif之后的语句，相当于C语法中的else-if
#else              与#if, #ifdef, #ifndef对应, 若这些条件不满足，则执行#else之后的语句，相当于C语法中的else
#endif             #if, #ifdef, #ifndef这些条件命令的结束标志.
defined         　与#if, #elif配合使用，判断某个宏是否被定义
*/
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x

void main()
{
	int a = 10, b = 20;
#ifdef MAX//判断某个宏是否被定义，若已定义，执行随后的语句
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#ifndef MIN
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
#undef MAX//取消一个宏的定义，之后这个宏所定义的就无效
#ifdef MAX
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN//与#ifdef相反，判断某个宏是否未被定义
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
	getch();
}