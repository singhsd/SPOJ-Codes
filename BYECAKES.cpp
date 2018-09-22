#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[4],b[4],ans[4];
int main()
{
    while(1)
    {
        for(int i=0; i<4; i++) cin>>a[i];
        for(int i=0; i<4; i++) cin>>b[i];
        /*for(int i=0; i<4; i++) cout<<a[i]<<" ";
        cout<<endl;
        for(int i=0; i<4; i++) cout<<b[i]<<" ";
        cout<<endl;*/
        if(a[0]==-1) return 0;
        ll i=0;
        while(1)
        {
            for(int j=0; j<4; j++)
            {
                if(i*b[j]<a[j]) {goto next;}
                ans[j]=i*b[j]-a[j];
            }
           // cout<<i<<endl;
            goto endi;
            next:
            i++;
        }
        endi:
            for(int j=0; j<4; j++)
                cout<<ans[j]<<" ";
            cout<<endl;
    }
}
