#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,r;
	char s1[80]="boy";
	char s2[80]="book";
	for(i=r=1;s1[i]!='\0'&&s2[i]!='\0';i++)
		if(s1[i]==s2[i])
			i++;
		else
		{
			r=s1[i]-s2[i];
			break;
		}
		printf("%d",r);
		system("pause");
		return 0;
}