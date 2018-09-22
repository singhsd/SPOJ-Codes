#include <stdio.h>
long long int a[10000000];
int main()
{
    long long int t,n,i;
    long long int ans;
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            ans+=a[i];
            if(ans>=n)
                ans%=n;
        }
        if(ans==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
