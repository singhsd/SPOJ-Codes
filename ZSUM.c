#include <stdio.h>
#define m 10000007
long long int fun(int n, int p)
{
	if(p==0) return 1;
	long long int x=fun(n,p/2);
	if(p&1) return ((n)%m*((x)%m*(x)%m)%m)%m;
	return ((x)%m*(x)%m)%m;
}
int main(void) {
	int n,k; long long int ans;
	while(1){
		scanf("%d%d",&n,&k);
		if(n==0&&k==0) return 0;
		ans=((2*fun(n-1,k))%m+fun(n,k)+(2*fun(n-1,n-1))%m+fun(n,n)%m)%m;
		printf("%lld\n",ans);
	}
	return 0;
}