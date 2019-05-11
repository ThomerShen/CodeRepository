#include <stdio.h>
#include <stdlib.h>
//十进制转二进制
int main(void)
{
	int n,i=0,k=0;
	char str[33];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=32;i++)
		{
			str[i]='0';//字符数组初始化0
		}
		i=0;
		while(0!=n)
		{
			str[i++]=n%2+'0';
			n=n/2;
		}
		i=32;
		while(i)
		{
			k++;
			printf("%c",str[--i]);
			if(4==k)//每四位间隔
			{
				k=0;
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}