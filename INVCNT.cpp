#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[200001],b[200001],bit[200001],n;
void update(ll i, ll v)
{
    while(i<=n){
        bit[i]+=v; i+=i&-i;
    }
}
ll query(int i)
{
    ll ans=0;
    while(i>0){
        ans+=bit[i]; i-=i&-i;
    }
    return ans;
}
int main()
{
    int t,d; cin>>t; while(t--)
    {
        cin>>n; memset(bit,0,sizeof bit);
        for(int i=0; i<n; i++) cin>>a[i],b[i]=a[i];
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            d=lower_bound(b,b+n,a[i])-b;
            a[i]=d+1;
        }
        ll ans=0;
        for(int i=n-1; i>=0; i--)
        {
            ans+=query(a[i]-1);
            update(a[i],1);
        }
        cout<<ans<<endl;
    }
}