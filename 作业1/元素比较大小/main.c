#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
void min_abs(int array[],int *x,int *y)
{
	int min=1000;
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(min>abs(array[i]-array[j]))
			{
				min=abs(array[i]-array[j]);
				*x=i;
				*y=j;
			}
}
int main()
{
	int array[N];
	int i;
	int x,y;
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
	min_abs(array,&x,&y);
	printf("%d %d\n",array[x],array[y]);
	system("pause");
	return 0;
}