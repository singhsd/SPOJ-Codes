#include<bits/stdc++.h>
using namespace std;
int n,a[5001],dp[5001],m=0;
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        dp[i]=1;
        for(int j=0; j<i; j++)
        {
            if(abs(a[i])>abs(a[j])&&((a[i]>0&&a[j]<0)||(a[i]<0&&a[j]>0))&&dp[i]<1+dp[j])
                dp[i]=1+dp[j];
        }
        m=m>dp[i]?m:dp[i];
    }
    //for(int i=0; i<n; i++)
      //  cout<<dp[i]<<" ";
    printf("%d\n",m);
}
