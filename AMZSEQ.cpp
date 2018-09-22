#include <bits/stdc++.h>
using namespace std;
long long int n,dp[3][1000];
int main()
{
	dp[0][1]=1;dp[1][1]=1;dp[2][1]=1;
	for(int i=2; i<1000; i++)
	{
		dp[0][i]=dp[0][i-1]+dp[1][i-1];
		dp[2][i]=dp[0][i];
		dp[1][i]=dp[0][i-1]+dp[1][i-1]+dp[2][i-1];
	}
	cin>>n;
	cout<<dp[1][n+1]<<endl;
	return 0;
}