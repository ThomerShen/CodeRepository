#include <stdio.h>
#include <stdlib.h>
//fopen()、fclose()
int main()
{
	int ch;
	FILE *fp;
	char fname[50];

	printf("Enter the address of the file: ");//./Debug/file.txt
	scanf("%s", fname);
	fp = fopen(fname, "r");//打开待读取文件
	if (fp == NULL)
	{
		printf("Failed to open file.Bye\n");
		system("pause");
		exit(1);
	}
	//getc(fp)从打开的文件中获取一个文件
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);

	system("pause");
	return 0;
}