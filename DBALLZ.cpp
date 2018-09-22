#include <bits/stdc++.h>
int e,n,ans,temp,a[1001],b[1001],dp[1000001];
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
        scanf("%d%d",&e,&n);
        dp[0]=0;
        for(int i=0; i<n; i++) scanf("%d",&a[i]);
        for(int i=0; i<n; i++) scanf("%d",&b[i]);
        for(int i=0; i<=e; i++)
        {
            ans=dp[i-1];
            for(int j=0; j<n; j++)
            {
                if(i>=a[j])
                {
                    temp=b[j]+dp[i-a[j]];
                    ans=max(ans,temp);
                }
            }
            dp[i]=ans;
        }
        printf("%d\n",dp[e]);
    }
}