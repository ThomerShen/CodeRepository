#include <stdio.h>
#include <stdlib.h>
#define N 10
int f_max(int array[],int *s_max)
{
	int i;
	int max=array[0];//���ֵ
	*s_max=array[0];//�δ�ֵ
	for(i=1;i<N;i++)
		if(array[i]>max)	//���ߴ���ǰ��
		{
			*s_max=max;		//�δ�ֵȡԭ��ֵ
			max=array[i];	//	���ֵȡ����
		}
		if(max==*s_max)	//���ֵ���ڴδ�ֵ����ʼ��ֵ
		{
			*s_max=array[1];
			for(i=1;i<N;i++)
				if(array[i]>*s_max)
					*s_max=array[i];
		}
		return max;
}
int main()
{
	int array[10];
	int max,s_max;
	int i;
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
	max=f_max(array,&s_max);
	printf("max=%d\ns_max=%d\n",max,s_max);
	system("pause");
	return 0;
}