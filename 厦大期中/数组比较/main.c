#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[]="language";
	char b[]="programe";
	int i;
	for(i=0;i<8;i++)
	{
		if(a[i]==b[i])
			printf("%c",a[i]);
	}
	system("pause");
	return 0;
	
}