#include <stdio.h>
#include <stdlib.h>

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
	int array1[N]={1,3,4,7,8,9,10};
	int array2[N]={2,3,5,6,7,8,11};
	int array3[N]={1,2,3,4,5,6,7};
	int b1[N]={0},b2[N]={0};
	intersection(array1,array2,b1);
	intersection(array3,b1,b2);
	for(i=0;b2[i];i++)
		printf("%d ",b2[i]);
	system("pause");
	return 0;
}