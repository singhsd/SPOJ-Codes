#include<bits/stdc++.h>
using namespace std;
int n,a[21][21];
long long int dp[20][(1<<21)+1];
long long int fun(int i, int k)
{
    if(k==((1<<(n))-1)) return 1;
    if(dp[i][k]!=-1) return dp[i][k];
    if(i>=n) return 0;
    long long int ans=0;
    for(int j=0; j<n; j+=1)
    {
        if(a[i][j]==1&&!(k&(1<<j)))
           ans+=fun(i+1,k|(1<<j));
    }
    return dp[i][k]=ans;
}
int main()
{
    int t; cin>>t; while(t--){
        cin>>n;
        memset(dp,-1,sizeof dp);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) cin>>a[i][j];
        cout<<fun(0,0)<<endl;
    }
}
