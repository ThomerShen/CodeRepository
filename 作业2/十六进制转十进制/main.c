#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char n,lese[30];
	int x=0,k;
tutu:
	printf("请输入十六进制数：\n");
	while(scanf("%c",&n)!=EOF)
	{
		if(n<='9'&&n>='0')
			x=x*16+n-'0';
		else if(n>='a'&&n<='f')
		{
			k=n-87;
			x=x*16+k;
		}
		else if(n>='A'&&n<='F')
		{
			k=n-55;
			x=x*16+k;
		}
		else
		{
			if(n!='\n')
			{
				gets(lese);
				printf("输入是不是十六进制数，请输入正确的十六进制\n");
				goto tutu;
			}
		}
		if(n=='\n')
		{
			printf("%d\n",x);
			x=0;
		}
	}
	system("pause");
	return 0;
}