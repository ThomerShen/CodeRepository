#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,m=0,k=0;
	int a[103];
	for(i=0;i<100;i++)
	{
		if(i<50)
			a[i]=i+1;
		else
			a[i]=i-49;
	}
	a[100]=200;
	a[101]=203;
	a[102]=230;

	i=0;
	while(i<103)
	{
		k=0;
		for(j=0;j<103;j++)
		{
			if(a[i]==a[j])
				k++;
		}
		if(1==k)
		{
			m++;
			printf("%d\n",a[i]);
		}
		if(3==m)
			break;
		i++;
	}
	system("pause");
	return 0;
}