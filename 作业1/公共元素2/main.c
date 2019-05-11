#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 7
void intersection(int array1[],int array2[],int b1[])
{
	int i=0,j=0,k=0;
	while(i<N&&j<N)
	{
		while(array1[i]<array2[j]&&i<N)
			i++;
		while(array1[i]>array2[j]&&j<N)
			j++;
		while(array1[i]==array2[j]&&i<N&&j<N)
		{
			b1[k++]=array1[i];
			i++;
			j++;
		}
	}
}
int main()
{
	int i;
	int array1[M][N]={{1,3,4,5,8,9,10},
					  {2,3,5,6,7,8,11},{1,2,3,4,5,6,7},{1,2,3,4,5,6,17},{1,2,3,4,5,16,7}};
	int b[M-1][N]={{0},{0},{0},{0}};
	intersection(array1[0],array1[1],b[0]);
	for(i=2;i<M;i++)
		intersection(array1[i],b[i-2],b[i-1]);
	for(i=0;b[M-2][i];i++)
		printf("%d\n",b[M-2][i]);
	system("pause");
	return 0;
}