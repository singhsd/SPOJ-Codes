#include <iostream>
#include <cstdio>
#define max(a,b,c) (c>(a>b?a:b)?c:(a>b?a:b))
using namespace std;

long long int dp[100015];
/*
int fun(int* p, int i, int n)
{
	if(dp[i]!=-1) return dp[i];
	if(i>=n) return 0;
	if(i==n-1) return dp[i]=p[i];
	if(i==n-2) return dp[i]=p[i]+p[i+1];
	if(i==n-3) return dp[i]=p[i]+p[i+1]+p[1+2];
	long long int x = p[i]+fun(p,i+2,n);
	long long int y = p[i]+p[i+1]+fun(p,i+4,n);
	long long int z = p[i]+p[i+1]+p[i+2]+fun(p,i+6,n);
	return dp[i]= max( x , max( y , z ) );
}
*/
int main()
{
	int t,n,a[100015];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0; i<100015; i++)
		{
			dp[i]=0;
			a[i]=0;
		}
		for(int i=0; i<n; i++)
			scanf("%d",&a[i]);
		for(int i=n-1;i>=0;i--)
			dp[i]=max(a[i]+dp[i+2],a[i]+a[i+1]+dp[i+4],a[i]+a[i+1]+a[i+2]+dp[i+6]);
		printf("%lld\n",dp[0]);
	}
	return 0;
}

/*
recursive way does not work. To see, use the above function
print whole dp array. You will see that there are some indices
for which the function is never called. This causes error in test case
1              
15
40000 599999 78898 45 754652 445695 9535468 199945 111142 40000 155165 14999 564643 216165 479944
Check for yourself
*/