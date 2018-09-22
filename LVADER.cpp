#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; scanf("%d",&t);
  for(int u=1; u<=t; u++){
    int x1,x2,y1,y2; scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int dp[x2-x1+5][y2-y1+5]; x2-=x1; y2-=y1; x1=0; y1=0;
    for(int i=x1; i<=x2; i++){
        for(int j=y1; j<=y2; j++){
            if(i==x1 || j==y1) dp[i][j]=1;
            else dp[i][j]=(dp[i-1][j]+dp[i-1][j-1]+dp[i][j-1])%1000000007;
        }
    }
    printf("Case %d: %d\n",u,dp[x2][y2]);
  }
}
