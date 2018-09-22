#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,a[100003],b[100003];
int main()
{
    while(1)
    {
        cin>>n; if(!n) return 0;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a,a+n); sort(b,b+n);
        ll ans=0;
        for(int i=0; i<n; i++)
            ans+=(ll)( (ll)a[i] * (ll)b[n-1-i] );
        cout<<ans<<endl;
    }
}
