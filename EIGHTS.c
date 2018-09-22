#include <stdio.h>
int main()
{
    int t;
    long long int n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=(n-1)*250+192;
        printf("%lld\n",ans);
    }
    return 0;
}
