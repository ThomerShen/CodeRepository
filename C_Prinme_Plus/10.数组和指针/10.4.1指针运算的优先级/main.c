#include <stdio.h>
//ָ�������е����ȼ�
int data[2] = { 100,200 };
int moredata[2] = { 300,400 };
//
//*p :p��ָ��Ķ����ֵ
//*p++;p��ʹ��ָ��ָ���ֵ���ٵ���ָ�룻
//*++p;p�ȵ���ָ�룬��ʹ��ָ��ָ��λ���ϵ�ֵ��
//(*p)++����ʹ��pָ���ֵ���ٵ�����ֵ�������ǵ�����ָ��
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
