#include <iostream>
using namespace std;
long long int dp[10000];
long long int a[10000];
#define max(a,b) (a>b?a:b)

long long int fun( int k, int n)
{
	if(dp[k])
		return dp[k];
	if(k>=n)
		return 0;
	if(k==n-1)
		return dp[k]=a[n-1];
	return dp[k]=max( a[k]+fun(k+2,n) , fun(k+1,n) );
}

int main()
{
	int t,n,i,k=1;
	cin >> t;
	while(k<=t)
	{
		for(i=0;i<10000;i++)
			dp[i]=0;
		cin >> n;
		for(i=0; i<n; i++)
			cin >> a[i];
		cout <<"Case "<<k<<": " <<fun(0,n) << endl;
		k++;
	}	
	return 0;
}