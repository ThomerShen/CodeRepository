#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,k,m=1;
	char str[20];
	while(scanf("%d",&n)!=EOF)
	{
		gets(str);//ºöÂÔ¿Õ¸ñ
		i=0;
		if(0==n)
			printf("0");
		if(n<0)
		{
			m=n;
			n=-n;
		}
		while(n)
		{
			k=n%16;
			n=n/16;
			if(k>9)
				str[i]=k+'87';
			else
				str[i]=k+'0';		
			i++;
		}
	while(i)
	{
		if(m<0)
		{
			m=-m;
			printf("-");
		}
		printf("%c",str[--i]);//³öÕ»²Ù×÷
	}
	printf("\n");
	}
	system("pause");
	return 0;
}