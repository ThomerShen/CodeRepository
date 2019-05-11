#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 7
void intersection(int array1[],int array2[])
{
	int i=0,j=0;
	while(i<M&&j<N)
	{
		while(array1[i]<array2[j])
			i++;
		while(array1[i]>array2[j])
			j++;
		while(array1[i]==array2[j])
		{
			printf("%d ",array1[i]);
			i++;
			j++;
		}
	}
}
int main()
{
	int array1[M]={1,3,4,7,8};
	int array2[N]={2,3,5,6,7,8,11};
	intersection(array1,array2);
	system("pause");
	return 0;
}

