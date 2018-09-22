#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
using namespace std;
int dp[102][502];
int main()
{
    int w,n;
    while(1)
    {
        cin>>w>>n;
        if(w==0&&n==0)
            break;
        int wt[n],val[n];
        for(int i=0; i<n; i++)
            cin>>wt[i]>>val[i];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=w; j++)
                dp[i][j]=0;
        }
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=w; j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else
                {
                    dp[i][j]=dp[i-1][j];
                    if(wt[i-1]<=j)
                        dp[i][j]=max(dp[i][j],dp[i-1][j-wt[i-1]]+val[i-1]);
                }
            }
        }
        for(int i=0; i<=w; i++)
            if(dp[n][i]==dp[n][w])
        {
            cout<<i<<" "<<dp[n][i]<<endl;
            break;
        }
    }
    return 0;
}