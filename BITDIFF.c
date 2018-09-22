#include <stdio.h>
int a[100000][36];
int main()
{
    int i,num,j,n,t,u=1;
    long long int noo,no1,ans;
    scanf("%d",&t);
    while(u<=t)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&num);
            j=35;
            while(num>0)
            {
                a[i][j--]=num%2;
                num/=2;
            }
        while(j>=0)
            a[i][j--]=0;
        }
        ans=0;
        for(j=35; j>=0; j--)
        {
            noo=0;no1=0;
            for(i=0; i<n; i++)
            {
                if(a[i][j]==0)
                    noo++;
                else
                    no1++;
            }
            ans=(ans+(2*noo*no1))%10000007;
        }
        printf("Case %d: %lld\n",u++,ans);
    }
    return 0;
}
