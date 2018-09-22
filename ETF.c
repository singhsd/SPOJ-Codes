#include <stdio.h>
int a[1000010];
int b[100000];
int main()
{
    int t,n,i,j,temp;
    long long int ans;
    for(i=2; i*i<=1000000; i++)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=1000000; j+=i)
                if(a[j]==0)
                a[j]=i;
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        ans=1;
        scanf("%d",&n);
        temp=n;
        j=0;
        if(n==1)
            goto last;
        while(n>1)
        {
            if(a[n]==0)
            {
                if(b[j-1]!=n)
                {
                    b[j]=0;
                    b[j++]=n;
                }
                break;
            }
            else
            {
                if(b[j-1]!=a[n])
                {
                    b[j]=0;
                    b[j++]=a[n];
                }
                n/=a[n];
            }
        }
        for(i=0; i<j; i++)
        {
            ans*=(temp-temp/b[i]);
            if(i>0)
                ans/=temp;
        }
        last:
        printf("%lld\n",ans);
    }
    return 0;
}
