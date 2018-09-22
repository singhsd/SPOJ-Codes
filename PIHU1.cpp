#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,j,l,r,mid,a[1002];
    long long int p,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%lld",&p);
        sort(a,a+n);
        for(i=0;i<n-2;i++)
        {
            if(a[i]>=p)
            {
                printf("NO\n");
                    goto end;
            }
            for(j=i+1;j<n-1;j++)
            {
                if(a[i]+a[j]>=p)
                {
                    printf("NO\n");
                    goto end;
                }
                int ans=p-a[i]-a[j];
                l=j+1; r=n-1;
                while(l<r)
                {
                    mid=l+(r-l)/2;
                    if(a[mid]==ans)
                    {
                        printf("YES\n");
                        goto end;
                    }
                    else if(a[mid]<ans)
                    {
                        l=mid+1;
                    }
                    else
                        r=mid-1;
                }
                if(a[l]==ans)
                {
                    printf("YES\n");
                    goto end;
                }
            }
        }
        printf("NO\n");
        end:printf("");
    }
    return 0;
}
