#include <bits/stdc++.h>
using namespace std;
double dp[551][3301];
int main()
{
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i < 7 ; i++ )
	 dp[1][i] =(double) 1.0 / 6.0;
    for(int i=2; i<=550; i++)
    {
        for(int j=1; j<=3300; j++)
        {
                for(int k=1; k<=6; k++)
                {
                    if(j-k<=0) break;
                    dp[i][j]+=(dp[i-1][j-k]/6.0);
                }
        }
    }
    int t,n,k; cin>>t; while(t--){
        cin>>n>>k;
        if(n>550||k>3300||k>6*n) {cout<<0<<endl; continue;}
        long long int ans= (dp[n][k]*100.0); cout<<ans<<endl;
    }
}