#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,step=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0) n=n/2;	//Å¼Êı
		else n=(3*n+1)/2;	//ÆæÊı
		step++;
	}
	printf("%d\n",step);
	system("pause");
	return 0;
}