#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n,con,a;
	while(scanf("%d",&n)!=EOF)
	{
		i=32;
		con=0;
		while(i--)
		{
			a=n&1;
			n=n>>1;//³ý2
			if(1==a)
				con++;
			if(n==0)
				break;
		}
		printf("%d\n",con);
	}
	system("pause");
	return 0;
}