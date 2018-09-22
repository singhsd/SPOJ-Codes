#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,a[201],dp[201][201][201];
int fun(int i, int pi, int pd)
{
    if(i>n) return 0;
    if(dp[i][pi][pd]!=-1) return dp[i][pi][pd];
    int ans=fun(i+1,pi,pd);
    if(a[i]>a[pi]||pi==0) ans=max(ans,1+fun(i+1,i,pd));
    if(a[i]<a[pd]||pd==0) ans=max(ans,1+fun(i+1,pi,i));
    return dp[i][pi][pd]=ans;
}
int main()
{
    while(true)
    {
        cin>>n;
        if(n==-1) return 0;
        memset(dp,-1,sizeof dp);
        for(int i=1; i<=n; i++) cin>>a[i];
        cout<<n-fun(1,0,0)<<endl;
    }
}
