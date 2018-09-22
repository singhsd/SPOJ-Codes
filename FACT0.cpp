#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,c,i;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        c=0,i=2;
        while(n%i==0){
            c++; n/=2;
        }
        if(c>0) cout<<2<<"^"<<c<<" ";
        i=3;
        while(i*i<=n && n!=1){
            c=0;
        while(n%i==0&&n>1){
            c++; n/=i;
        }
        if(c>0) cout<<i<<"^"<<c<<" ";
        i+=2;
        }
        if(n>1) cout<<n<<"^1";
        cout<<endl;
    }
}