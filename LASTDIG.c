#include <stdio.h>
int main()
{
    int t,i,ans;
    long long int a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(b==0)
        {
            printf("1\n");
            continue;
        }
        b=b%4;
        if(b==0)
            b=4;
        ans=1;
        for(i=1; i<=b; i++)
            ans*=a;
        ans%=10;
        printf("%d\n",ans);
    }
    return 0;
}
