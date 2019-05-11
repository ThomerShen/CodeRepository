#include <stdio.h>
//指针运算中的优先级
int data[2] = { 100,200 };
int moredata[2] = { 300,400 };
//
//*p :p所指向的对象的值
//*p++;p先使用指针指向的值，再递增指针；
//*++p;p先递增指针，再使用指针指向位置上的值；
//(*p)++；先使用p指向的值，再递增该值，而不是递增该指针
int main()
{
	int *p1, *p2, *p3;
	p1 = p2 = data;
	p3 = moredata;
	printf("  *p1=%d,   *p2=%d,     *p3=%d\n", *p1, *p2, *p3);
	printf("*p1++=%d, *++p2=%d, (*p3)++=%d\n", *p1++, *++p2, (*p3)++);
	printf("  *p1=%d,   *p2=%d,     *p3=%d\n", *p1, *p2, *p3);
	system("pause");
	return 0;
}
