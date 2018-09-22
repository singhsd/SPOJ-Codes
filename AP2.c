#include <stdio.h>
int main()
{
    long long int a,b,ft,d,n,s,i;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&s);
        n=2*s/(a+b);
        printf("%lld\n",n);
        d=(b-a)/(n-5);
        ft=a-2*d;
        for(i=0; i<n; i++)
            printf("%lld ",ft+i*d);
        printf("\n");
    }
    return 0;
}
