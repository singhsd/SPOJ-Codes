#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m,a[1001];
int dp[1001];
int main()
{
    int t; cin>>t; while(t--)
    {
        cin>>n>>m;
        int ma=0;
        for(int i=0; i<n; i++) {cin>>a[i]; dp[i]=1;}
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((a[j]<a[i]||i==m)&&dp[j]<1+dp[i])
                    dp[j]=1+dp[i];
            }
            ma=max(ma,dp[i]);
        }
        //for(int i=0; i<n; i++)
          //  cout<<dp[i]<<" ";
        cout<<endl<<ma<<endl;
    }
}
