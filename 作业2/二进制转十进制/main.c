#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d=0;
	char lese[20],n;
	tutu:
		printf("�����������\n");
	while(scanf("%c",&n)!=EOF)
	{
		if(n>'1'||n<'0')
		{
			if(n!='\n')
			{
				gets(lese);
				printf("����������ȷ�Ķ�������\n");
					goto tutu;
			}
		}
		if(n=='\n')
		{
			printf("ת����ʮ���ƣ�%d\n",d);
			printf("���롰ctl+z�������������������ƣ�\n");
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