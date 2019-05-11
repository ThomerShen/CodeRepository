#include <stdio.h>
//地址的地址或指针的指针就是双重间接的列子
//
int main()
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };//等效于int(*pz)[2]

	//int(*pz)[2];//pz指向一个内含两个int 类型值的数组，声明的是一个指向数组的指针
	//相对上一行来说，int *pax[2];//pax是一个内含两个指针元素的数组，每个元素都指向int的指针;[]的优先级比*的高
	//pz = zippo;//以下程序中 zippo 换成 pz

	//数组名zippo是一个内含2个int类型的数据对象,8字节，每加1，它所指向的地址加8字节
	printf("   zippo= %p,   zippo+1= %p\n", zippo, zippo + 1);
	printf("zippo[0]= %p,zippo[0]+1= %p\n", zippo[0], zippo[0] + 1);
	printf("  *zippo= %p,  *zippo+1= %p\n", *zippo, *zippo + 1);
	//二位数组zippo的地址和一维数组zippo[0]的地址相同，都是各自数组首元素的地址，因而与&zippo[0][0]的地址相同
	//zippo[0]和*zippo完全相同；然后对二维数组名解引用2次，得到存储在数组中的值。
	//使用两个间接运算符*或者使用两对方括号[]都能获得该值
	printf("zippo[0][0]= %d\n", zippo[0][0]);
	printf("  *zippo[0]= %d\n", *zippo[0]);
	printf("    **zippo= %d\n", **zippo);
	//
	printf("    zippo[2][1]= %d\n", zippo[2][1]);
	printf("*(*(zippo+2)+1)= %d\n", *(*(zippo + 2) + 1));
	//zippo[2][1]的指针表示法是*(*(zippo+2)+1)；
	//*(*(zippo+2)+1)的含义是表示二维数组的第3个一维数组的第2个int类型元素的值，即数组的第3行第2列的值zippo[2][1]

	system("pause");
	return 0;
}