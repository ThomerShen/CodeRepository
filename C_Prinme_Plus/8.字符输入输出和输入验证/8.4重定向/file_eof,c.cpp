#include <stdio.h>
#include <stdlib.h>
//fopen()��fclose()
int main()
{
	int ch;
	FILE *fp;
	char fname[50];

	printf("Enter the address of the file: ");//./Debug/file.txt
	scanf("%s", fname);
	fp = fopen(fname, "r");//�򿪴���ȡ�ļ�
	if (fp == NULL)
	{
		printf("Failed to open file.Bye\n");
		system("pause");
		exit(1);
	}
	//getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ļ�
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);

	system("pause");
	return 0;
}