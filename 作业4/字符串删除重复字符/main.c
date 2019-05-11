#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 100

int fun(int arr[],int after[],int n)
{
	int j=0,i;
	int flag[MAXSIZE]={0};
	for(i=0;i<n;i++)
	{
		if(flag[arr[i]]==0)
		{
			after[j++]=arr[i];
			flag[arr[i]]=1;
		}
	}
	return j;
}

int main()
{
	int i,n,length;
	int arr[MAXSIZE],after[MAXSIZE];
	printf("n=");
	scanf("%d",&n);
	printf("ÊäÈëÊý×é£º\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//gets(arr[i]);
	length=fun(arr,after,n);
	for(i=0;i<length;i++)
	{
		printf("%d,",after[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}