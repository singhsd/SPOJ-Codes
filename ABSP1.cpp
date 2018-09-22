#include <stdio.h>
long long int a[10005];
int main()
{
    int i,t,n;
    long long int sum,term;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0; term=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            term+=i*a[i];
            if(i<n-1)
            {
                a[i]=a[i]+a[i-1];
                sum+=a[i];
            }
        }
        sum=term-sum;
        printf("%lld\n",sum);
    }
    return 0;
}