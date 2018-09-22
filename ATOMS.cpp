#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ll a,b,c,t,temp;
    int tr; cin>>tr; while(tr--){
        cin>>a>>b>>c;
        t=0;
        while(1)
        {
            temp=a*b;
            if(a!=temp/b) break;
            if(temp>c) break;
            a=temp;
            t++;
        }
        cout<<t<<endl;
    }
}
