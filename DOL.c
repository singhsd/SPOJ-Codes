#include <stdio.h>
int main()
{
    int t,i=1;
    long long int n;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%lld",&n);
        if(n%2!=0)
        {
            printf("Case %d: %lld\n",i++,n);
            continue;
        }
        while(1)
        {
            n/=2;
            if(n%2!=0)
            {
                printf("Case %d: %lld\n",i++,n);
                break;
            }
        }
    }
    return 0;
}
