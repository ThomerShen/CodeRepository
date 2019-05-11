#include <stdio.h>
//指针变量的基本操作
int main(void)
{
	int urn[5] = { 100,200,300,400,500 }; 
	int *ptr1, *ptr2, *ptr3;
	//赋值
	ptr1 = urn;//urn数组的首元素地址
	ptr2 = &urn[2];
	//解引用，取地址；ptr1存储在内存编码为 0x010ff700的地址上，而该存储单元存储的内容是0x010ff70c，即urn的地址
	printf("pointer value,dereferenced pointer,pointer address:\n");
	printf("  ptr1= %p,  *ptr1= %d,  &ptr1= %p\n", ptr1, *ptr1, &ptr1);//ptr1是指向urn[0]的地址，而&ptr1是指向ptr1的指针
	//指针加法
	ptr3 = ptr1 + 4;//ptr1 + 4等价于&urn[4]
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4=%p,*(ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));
	//指针递增
	ptr1++;
	printf("\nvalues after ptr1++\n");
	printf("ptr1=%d,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	//指针递减
	ptr2--;
	printf("\nvalues after ptr2--\n");
	printf("ptr2=%d,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	//恢复
	ptr1--;
	ptr2++;
	printf("\npointer reset to original values:\n");
	printf("ptr1=%p,ptr2=%p\n", ptr1, ptr2);
	//一个指针减去另一个指针
	printf("\nsubtracting one pointer from another:\n ");
	printf("ptr2=%p,ptr1=%p,ptr2-ptr1=%td\n", ptr2, ptr1,ptr2 - ptr1);//%td 两个指针差值的类型
	//一个指针减去一个整数
	printf("\nsubtracting an int from a pointer:\n ");
	printf("ptr3=%p,ptr3-2=%p\n", ptr3,  ptr3 - 2);//%td 两个指针差值的类型

	system("pause");
	return 0;
}