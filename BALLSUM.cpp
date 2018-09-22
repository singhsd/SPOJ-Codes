#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
int main()
{
    ll n,p,q,ed,k;
    while(1){
        cin>>n>>k;
        if(n==-1) break;
        q=n*(n-1)/2;
        ed=k%2?k/2:k/2-1;
        p=ed*(k-ed-1);
        //cout<<p<<"/"<<q<<endl;
        ed=gcd(p,q);
        p/=ed;
        q/=ed;
        if(p==0) cout<<"0\n";
        else if(p==q) cout<<"1\n";
        else cout<<p<<"/"<<q<<endl;
    }
}
