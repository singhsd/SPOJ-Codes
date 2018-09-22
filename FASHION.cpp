#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int n,a[1002],b[1002];
       cin>>n;
       for(int i=0; i<n; i++)
        cin>>a[i];
       for(int i=0; i<n; i++)
        cin>>b[i];
       long long int ans=0;
       sort(a,a+n);
       sort(b,b+n);
       for(int i=0; i<n; i++)
        ans+=a[i]*b[i];
       cout<<ans<<endl;
   }
}