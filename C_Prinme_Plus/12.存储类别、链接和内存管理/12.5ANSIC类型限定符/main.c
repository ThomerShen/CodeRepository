///const类型限定符，主要在指针和形参声明中使用
const float *pf;//pf指向一个float类型的const值，所指向的值不能改变，而pf本身可以改变
float * const pt;//pt是一个const指针，本身的值不能改变，pt必须指向同一个地址，但是它所指向的值可以改变
const float * const ptr;//表明ptr既不能指向别处，它所指向的值也不能改变
float const *pfc;//const float *pf;相同

void display(const int array[], int limit);//const int array[]与const int *array相同

//volatile类型限定符
volatile int local;//local是一个易变的位置
volatile int *ploc//ploc是一个指向易变的位置的指针

//restrict类型限定符,允许编译器优化某部分代码以更好地支持计算机，
//只能用于指针，表明该指针时访问数据对象的唯一且初始的方式//


//_Atomic类型限定符
//并发程序设计把程序执行分为可以同时执行的多个线程。
//头文件stdatomic.h和threads.h提供可选的管理方法

_Atomic int hogs;
atomic_store(&hogs, 12);
//在hogs中存储12是一个原子过程，其他线程不能访问hogs


