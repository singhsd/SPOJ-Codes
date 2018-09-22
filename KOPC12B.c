#include <stdio.h>
#define M 1000000007
long long int a[10000000];
long long power(int a, int b)
{
    if(a==1)
        return 1;
    else if(b==0)
        return 1;
    else
    {
        long long int x=power(a,b/2);
        if(b%2==0)
            return (x*x)%M;
        else
            return a*x%M*x%M;
    }
}
int main()
{
    int t,n,i;
    a[0]=1;
    for(i=1; i<=10000000; i++)
        a[i]=(i*a[i-1])%M;
    long long int ans,num,den;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        num=a[2*n-1];
        den=(a[n-1]*a[n-1])%M;
        ans=(num*power(den,M-2)%M)%M;
        printf("%d\n",ans);
    }
        return 0;
}
