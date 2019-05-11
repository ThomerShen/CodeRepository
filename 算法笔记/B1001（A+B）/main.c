#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t,tcase=1;
	scanf("%d",&t);
	while(t--){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b>c){
			printf("case#%d:true\n",tcase++);
		}else {
			printf("case#%d:false\n",tcase++);
		}
	}
	system("pause");
	return 0;
	
}