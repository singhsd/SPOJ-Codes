#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
        int n; cin>>n; long long int y=0,z=0,f=0;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin>>x;
            y+=x;
            if(y<=0) f=1;
            z=z<y?z:y;
        }
        if(z<=0) z=(long long int)((-1)*z+1);
        if(f==1)
        cout<<z<<endl;
        else cout<<"0\n";
    }
}