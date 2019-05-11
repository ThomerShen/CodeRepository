#include <stdio.h>
#include <stdlib.h>
#define N 10
int f_max(int array[])
{
	int i,j,t;
	for(i=0;i<N;i++)
		for(j=0;j<i;j++)
			if(array[i]<array[j])
			{
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
	return array[N/2];
}
int main()
{
	int array[N];
	int countmax;
	int i;
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
	countmax=f_max(array);
	printf("%d\n",countmax);
	system("pause");
	return 0;
}
