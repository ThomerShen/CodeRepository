#include <stdio.h>
//猜拳A B
int main()
{
    int i;
    int n,faila=0,failb=0;
    printf("经过n轮交战\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        if(a1+b1==a2&&a1+b1!=b2)
            failb++;
        else if(a1+b1!=a2&&a1+b1==b2)
            faila++;
    }
    printf("A喝了%d杯，B喝了%d杯\n",faila,failb);
    return 0;
}
