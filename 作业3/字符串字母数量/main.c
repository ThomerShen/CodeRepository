#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//   hello  world  how  are  you  
int main()
{
	int n,i;
	char c[100];
	while(gets(c)!=NULL)
	{
		n=0;
		for(i=0;i<strlen(c);i++)
		{
			if(i!=0&&c[i-1]!=' '&&c[i]==' ')//���ʴ���
			{
				n++;
			}
		}
		//if(i!=0&&c[i-1]!=' ')//���һ������
		//	n++;
		printf("the number of word is %d\n",n);
	}
	system("pause");
	return 0;
}