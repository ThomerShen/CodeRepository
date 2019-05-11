#include <stdio.h>
//数组元素循环右移问题
int main()
{
    int a[100];
    int i,n,m,count=0;
    scanf("%d%d",&n,&m);
    m=m%n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-m;i<n;i++)
    {
        printf("%d",a[i]);
        count++;
        if(count<n)
            printf(" ");
    }
    for(i=0;i<n-m;i++)
    {
        printf("%d",a[i]);
        count++;
        if(count<n)
            printf(" ");
    }
    return 0;
}
