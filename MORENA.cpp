#include<bits/stdc++.h>
using namespace std;
signed long long int a[1000004];

int main()
{
    int n;
    cin>>n;
    int dp[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; dp[i]=0;
    }
    dp[n-1]=1;
    int flag=0;
    for(int i=n-2; i>=0; i--)
    {
        if(flag==0)
        {
            dp[i]=dp[i+1];
            if(a[1+i]>a[i])
            {flag=1; dp[i]++;}
            else if(a[i+1]<a[i])
            {flag=2;dp[i]++;}
        }
        else if(flag==1)
        {
            dp[i]=dp[i+1];
            if(a[i]>a[i+1])
            {
                dp[i]++; flag=2;
            }
        }
        else
        {
            dp[i]=dp[i+1];
            if(a[i]<a[i+1])
            {
                dp[i]++; flag=1;
            }
        }
    }
    cout<<dp[0];
    return 0;
}
