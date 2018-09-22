#include <stdio.h>
#define m 1000000003
# define s(n) (n*(n+1)/2)
long long int a[1000011];
int main()
{
    long long int t,i;
    a[0]=0;
    for(i=1; i<1000001; i++)
    {
        a[i]=((s(i)%m)*(s(i)%m))%m;
        a[i]=(a[i]+a[i-1])%m;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&i);
        printf("%lld\n",a[i]);
    }
    return 0;
}