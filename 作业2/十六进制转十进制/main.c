#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char n,lese[30];
	int x=0,k;
tutu:
	printf("������ʮ����������\n");
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
				printf("�����ǲ���ʮ������������������ȷ��ʮ������\n");
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