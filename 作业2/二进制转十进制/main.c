#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d=0;
	char lese[20],n;
	tutu:
		printf("请输入二进制\n");
	while(scanf("%c",&n)!=EOF)
	{
		if(n>'1'||n<'0')
		{
			if(n!='\n')
			{
				gets(lese);
				printf("重新输入正确的二进制数\n");
					goto tutu;
			}
		}
		if(n=='\n')
		{
			printf("转换成十进制：%d\n",d);
			printf("输入“ctl+z”结束或继续输入二进制：\n");
			d=0;
		}
		else
		{
			d=d*2+n-'0';
		}
	}
	system("pause");
	return 0;
}