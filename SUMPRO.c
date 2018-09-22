#include <stdio.h>
#include<math.h>
#define m 1000000007
#define s(n) ((n)*(n+1)/2)
int main()
{
    int t,i;
    unsigned long long int n,ans,j;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%lld",&n);
        i=2*sqrt(n); j=1;
        ans=n%m;
        while(i>0 && j<n)
        {
            ans=(ans+((j)%m*(s(n/j)-s(n/(j+1)))%m)%m)%m;
            j=n/(j+1);
            j=n/j;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
