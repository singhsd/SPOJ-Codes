#include <bits/stdc++.h>
using namespace std;
int dp[101][101][101],n,m;
char a[101][101];
int fun(int i, int j, int x)
{
  int y=i+j-x;
  if(i>=n||j>=m||x>=n||y>=m||a[i][j]=='#'||a[x][y]=='#') return 0;
  if(dp[i][j][x]!=-1) return dp[i][j][x];
  if(i==n-1&&j==m-1&&x==n-1&&y==m-1)
  {
      if(a[n-1][m-1]=='*') return dp[i][j][x]=1;
      return dp[i][j][x]=0;
  }
  int &ans=dp[i][j][x]; ans=0;
  if(a[i][j]=='*') ans=1;
  if(a[x][y]=='*' && x!=i && y!=j) ans++;
  ans+= max(fun(i+1,j,x+1),max(fun(i+1,j,x),max(fun(i,j+1,x+1),fun(i,j+1,x))));
  return ans;
}
int main() {
    int t,ans;scanf("%d",&t); while(t--){
        memset(dp,-1,sizeof dp);
        scanf("%d%d",&m,&n); getchar();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++) scanf("%c",&a[i][j]);
            getchar();
        }
        ans=fun(0,0,0);
        printf("%d\n",ans);
    }
}