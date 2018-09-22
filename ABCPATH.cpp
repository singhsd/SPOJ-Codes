#include <bits/stdc++.h>
using namespace std;
int n,m,dp[51][51]; char s[51][51];
int fun(int i, int j)
{
    if(i>=n||i<0||j>=m||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    for(int x=-1; x<2; x++)
    {
        for(int y=-1; y<2; y++)
        {
            if(x!=0||y!=0)
            {
                if(i+x>=0&&i+x<n&&j+y>=0&&j+y<m&&s[i+x][j+y]==1+s[i][j])
                ans=max(fun(i+x,j+y),ans);
                if(i+x>=0&&i+x<n&&j-y>=0&&j-y<m&&s[i+x][j-y]==1+s[i][j])
                ans=max(fun(i+x,j-y),ans);
                if(i-x>=0&&i-x<n&&j+y>=0&&j+y<m&&s[i-x][j+y]==1+s[i][j])
                ans=(fun(i-x,j+y),ans);
                if(i-x>=0&&i-x<n&&j-y>=0&&j-y<m&&s[i-x][j-y]==1+s[i][j])
                ans=max(fun(i-x,j-y),ans);
            }
        }
    }
    return dp[i][j]=ans+1;
}
int main()
{
    int p=1;
    while(1){
    cin>>n>>m;
    if(!n&&!m) break;
    for(int i=0; i<n; i++)
        scanf("%s\n",s[i]);
    memset(dp,-1,sizeof dp);
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j+=1)
    {
        if(s[i][j]=='A')
        dp[i][j]=fun(i,j);
    }
    int max=0;
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j+=1){
        max=max>dp[i][j]?max:dp[i][j];}}
    printf("Case %d: %d\n",p++,max);
    }
}
