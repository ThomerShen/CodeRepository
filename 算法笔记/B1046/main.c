#include <stdio.h>
//��ȭA B
int main()
{
    int i;
    int n,faila=0,failb=0;
    printf("����n�ֽ�ս\n");
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
    printf("A����%d����B����%d��\n",faila,failb);
    return 0;
}
