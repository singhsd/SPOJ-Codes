#include <bits/stdc++.h>
using namespace std;
int n,m,a[502][502],dp[502][502];
int fun(int i, int j)
{
    if(i>=n||j>=m) return INT_MAX;
    if(i==n-1&&j==m-1) return dp[i][j]=1;
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=min(fun(i+1,j),fun(i,j+1))-a[i][j];
    if(dp[i][j]<1) dp[i][j]=1;
    return dp[i][j];
}
int main()
{
    int t; scanf("%d",&t); while(t--){
        scanf("%d%d",&n,&m);
        memset(dp,-1,sizeof dp);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            scanf("%d",&a[i][j]);
        printf("%d\n",fun(0,0));
    }
}