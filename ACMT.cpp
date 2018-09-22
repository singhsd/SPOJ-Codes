#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; while(n--){
    int a,b;
    cin>>a>>b;if(a>b){
        int temp=a; a=b; b=temp;
    }
    int ans=0;
    if(a>b/2) ans=(a+b)/3;
    else ans=a;
    cout<<ans<<endl;
}
}
