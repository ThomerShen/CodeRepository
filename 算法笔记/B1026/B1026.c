#include <stdio.h>
#include <stdlib.h>
//程序运行时间
int main()
{
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    int ans=c1-c2;
    if(ans%100 >= 50){//四舍五入
        ans=ans/100+1;
    }else{
        ans=ans/100;
    }
    printf("%02d:%02d:%02d\n",ans/3600,ans%3600/100,ans%60);
    return 0;
}
