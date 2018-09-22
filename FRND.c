#include <stdio.h>
int a[1000000][30];
int main()
{
    int i,num,j,n,k=1;
    long long int noo,no1,ans;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&num);
            j=29;
            while(num>0)
            {
                a[i][j--]=num%2;
                num/=2;
            }
        while(j>=0)
            a[i][j--]=0;
        }
        ans=0;
        for(j=29; j>=0; j--)
        {
            noo=0;no1=0;
            for(i=0; i<n; i++)
            {
                if(a[i][j]==0)
                    noo++;
                else
                    no1++;
            }
            ans+=noo*no1*k;
            k*=2;
        }
        printf("%lld\n",ans);
    return 0;
}
