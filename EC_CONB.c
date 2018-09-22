#include <stdio.h>
#include<math.h>
int main()
{
    int n,t,d,i;
    long long int j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            printf("%d\n",n);
            continue;
        }
        i=n; d=0;
        while(n>0)
        {
            d++;
            n/=2;
        }
        n=i; j=0;
        for(i=0; i<d; i++)
        {
            j+=(n%2)*pow(2,d-1-i);
            n/=2;
        }
        printf("%lld\n",j);
    }
    return 0;
}
