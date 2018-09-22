#include<bits/stdc++.h>
using namespace std;
int fun(int n, long long int k)
{
	if(n==0) return 1;
	long long int x=k/2;
	int temp=fun(n-1,x);
	if(2*x==k) temp=(temp==0?1:0);
	return temp;
}
int main()
{
    int n; long long int k; cin>>n>>k;
    int x=fun(n,k);
    if(x==1) cout<<"red\n";
    else cout<<"blue\n";
}