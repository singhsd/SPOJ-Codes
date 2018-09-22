#include<bits/stdc++.h>
using namespace std;
long long int p(int n)
{
	if(n==0) return 1;
	long long int x=p(n/2);
	if(n&1) return 2*x*x;
	else return x*x;
}
int fun(int n, long long int k)
{
	if(n==1) return 1;
	if(n==2) { if(k==1) return 1; else return 0; }
	long long int x=p(n-1);
	if(n>54) return fun(54,k);
	if(k<=x/2 ) return fun(n-1,k);
	if(k<=3*x/4) return fun(n-1,k-x/4);
	else return fun(n-1,k-3*x/4);
}
int main()
{
  int t; cin>>t; while(t--)
  {
    int n; long long int k; cin>>n>>k;
    int x=fun(n,k);
    if(x) cout<<"Male\n";
    else cout<<"Female\n";
  }
}