#include <stdio.h>
#include <stdlib.h>
//#if #ifdef ��#ifndef ���ۺ�Ӧ��
/*
#define            ����һ��Ԥ�����
#undef            ȡ����Ķ���

#if                   ����Ԥ�����е���������൱��C�﷨�е�if���
#ifdef              �ж�ĳ�����Ƿ񱻶��壬���Ѷ��壬ִ���������
#ifndef            ��#ifdef�෴���ж�ĳ�����Ƿ�δ������
#elif                ��#if, #ifdef, #ifndef��ǰ���#elif���������㣬��ִ��#elif֮�����䣬�൱��C�﷨�е�else-if
#else              ��#if, #ifdef, #ifndef��Ӧ, ����Щ���������㣬��ִ��#else֮�����䣬�൱��C�﷨�е�else
#endif             #if, #ifdef, #ifndef��Щ��������Ľ�����־.
defined         ����#if, #elif���ʹ�ã��ж�ĳ�����Ƿ񱻶���
*/
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x

void main()
{
	int a = 10, b = 20;
#ifdef MAX//�ж�ĳ�����Ƿ񱻶��壬���Ѷ��壬ִ���������
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#ifndef MIN
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
#undef MAX//ȡ��һ����Ķ��壬֮�������������ľ���Ч
#ifdef MAX
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN//��#ifdef�෴���ж�ĳ�����Ƿ�δ������
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
	getch();
}