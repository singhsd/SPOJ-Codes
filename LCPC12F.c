#include <stdio.h>
long long int a[100010];
int main()
{
    long long int t,u=1,i,j,count1,x,n;
    scanf("%lld",&t);
    while(u<=t)
    {
        count1=0;
        scanf("%lld%lld",&x,&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&j);
            a[j]++;
            if(j>x)
                a[j]=0;
        }
        for(i=0; i<=x/2; i++)
        {
            if(2*i==x)
               count1+=a[i]*(a[i]-1)/2;
            else
                count1+=a[i]*a[x-i];
            a[x-i]=0; a[i]=0;
        }
            printf("%lld. %lld\n",u,count1);
        u++;
    }
    return 0;
}
