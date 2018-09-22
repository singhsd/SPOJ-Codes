#include <stdio.h>
int a[10000];
int main()
{
    int n,i,j,diff,ans;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            return 0;
        ans=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i];
        }
        if(ans%n!=0)
        {
            printf("-1\n");
            continue;
        }
        ans/=n;
        diff=0;
        for(i=0; i<n; i++)
        {
            if(ans>a[i])
                diff+=ans-a[i];
            else
                diff+=a[i]-ans;
        }
        diff/=2;
        printf("%d\n",diff);
    }
    return 0;
}
