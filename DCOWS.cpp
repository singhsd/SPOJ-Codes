#include<bits/stdc++.h>
using namespace std;
long long int n,m, a[5005],b[5005],dp[5005][5005];
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>a[i];
     sort(a,a+n+1);
    for(int i=1; i<=m; i++) cin>>b[i];
     sort(b,b+m+1);
  for(int i=0; i<=n; i++)
  for(int j=0; j<=m; j++)
  {
      if(i==0) dp[i][j]=0;
      else if(i>j) dp[i][j]=9999999999999ULL;
      else dp[i][j]=min(dp[i][j-1],dp[i-1][j-1]+abs(a[i]-b[j]));
  }
  cout<<dp[n][m]<<endl;
}
