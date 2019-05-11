#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	while(scanf("%c",&c)!=EOF)
	{
		if(c>='a'&&c<='z')
			c=c-32;
		else if(c>='A'&&c<='Z')
			c=c+32;
		printf("%c",c);
	}
	system("pause");
	return 0;
}