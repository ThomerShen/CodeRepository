///const�����޶�������Ҫ��ָ����β�������ʹ��
const float *pf;//pfָ��һ��float���͵�constֵ����ָ���ֵ���ܸı䣬��pf������Ըı�
float * const pt;//pt��һ��constָ�룬�����ֵ���ܸı䣬pt����ָ��ͬһ����ַ����������ָ���ֵ���Ըı�
const float * const ptr;//����ptr�Ȳ���ָ��𴦣�����ָ���ֵҲ���ܸı�
float const *pfc;//const float *pf;��ͬ

void display(const int array[], int limit);//const int array[]��const int *array��ͬ

//volatile�����޶���
volatile int local;//local��һ���ױ��λ��
volatile int *ploc//ploc��һ��ָ���ױ��λ�õ�ָ��

//restrict�����޶���,����������Ż�ĳ���ִ����Ը��õ�֧�ּ������
//ֻ������ָ�룬������ָ��ʱ�������ݶ����Ψһ�ҳ�ʼ�ķ�ʽ//


//_Atomic�����޶���
//����������ưѳ���ִ�з�Ϊ����ͬʱִ�еĶ���̡߳�
//ͷ�ļ�stdatomic.h��threads.h�ṩ��ѡ�Ĺ�����

_Atomic int hogs;
atomic_store(&hogs, 12);
//��hogs�д洢12��һ��ԭ�ӹ��̣������̲߳��ܷ���hogs


