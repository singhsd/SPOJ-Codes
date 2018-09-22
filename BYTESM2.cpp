#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m,a[101][101],dp[101][101];
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin>>a[i][j];
        for(int i=0; i<m; i++)
            dp[0][i]=a[0][i];
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(j==0)
                {
                    dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j==m-1)
                {
                   dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
                }
                else
                    dp[i][j]=a[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
            }
        }
        int mi=dp[n-1][0];
        for(int i=1; i<m; i++)
            mi=max(mi,dp[n-1][i]);
        /*for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
            }*/
        cout<<mi<<endl;
    }
}
