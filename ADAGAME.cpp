#include<bits/stdc++.h>
using namespace std;
int n,m,dp[10001][101];
int fun(int x, int y)
{
    if(y==0)
    {
        if(x>n) return 1;
        return 0;
    }
    if(dp[x][y]!=-1) return dp[x][y];
    if(y%2==m%2)
    {
        int a=10*(x/10) + (x%10+1)%10;
        dp[x][y]=max(dp[x][y],fun(a,y-1));
        a=100*(x/100)+x%10+10*(((x%100)/10+1)%10);
        dp[x][y]=max(dp[x][y],fun(a,y-1));
        a=1000*(x/1000)+x%100+ 100*(((x%1000)/100+1)%10);
        dp[x][y]=max(dp[x][y],fun(a,y-1));
        a=1000*((x/1000+1)%10)+x%1000;
        dp[x][y]=max(dp[x][y],fun(a,y-1));
    }
    else
    {
        dp[x][y]=1;
        int a=10*(x/10) + (x%10+1)%10;
        dp[x][y]=min(dp[x][y],fun(a,y-1));
        a=100*(x/100)+x%10+10*(((x%100)/10+1)%10);
        dp[x][y]=min(dp[x][y],fun(a,y-1));
        a=1000*(x/1000)+x%100+ 100*(((x%1000)/100+1)%10);
        dp[x][y]=min(dp[x][y],fun(a,y-1));
        a=1000*((x/1000+1)%10)+x%1000;
        dp[x][y]=min(dp[x][y],fun(a,y-1));
    }
    return dp[x][y];
}
int main()
{
    int t; cin>>t; while(t--)
    {
    memset(dp,-1,sizeof dp);
        cin>>n>>m;
        if(fun(n,m)) cout<<"Ada\n";
        else cout<<"Vinit\n";
    }
}
