#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
int cost[25][25],value[25][25],seal[25];
int dp[25][1003][2];
int batch,items,budget;
int fun(int b, int money, int open )
{
    if(b==batch) return 0;
    if(dp[b][money][open]!=-1) return dp[b][money][open];
    int openfalse=fun(b+1,money,0);
    int ans=0;
    if(seal[b]<=money&&open==0)
    {
        money-=seal[b];
        for(int i=0; i<items; i++)
          if(cost[b][i]<=money)
            ans=max(ans,value[b][i]+fun(b,money-cost[b][i],1));
        money+=seal[b];
    }
    else if(open)
    {
        for(int i=0; i<items; i++)
          if(cost[b][i]<=money)
            ans=max(ans,value[b][i]+fun(b,money-cost[b][i],1));

    }
    return dp[b][money][open]=max(ans,openfalse);
}
int main()
{
    int t; cin>>t; while(t--)
    {
        cin>>batch>>items>>budget;
        for(int i=0; i<batch; i++) cin>>seal[i];
        for(int i=0; i<batch; i++)
            for(int j=0; j<items; j++) cin>>cost[i][j];
        for(int i=0; i<batch; i++)
            for(int j=0; j<items; j++) cin>>value[i][j];
        memset(dp,-1,sizeof dp);
        cout<<fun(0,budget,0)<<endl;
    }
}
