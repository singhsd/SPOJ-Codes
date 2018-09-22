#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int x)
{
    int ans=0;
    while(x)
    {
        ans= 10*ans + x%10;
        x/=10;
    }
    return ans;
}
int main()
{
    int n; long long int x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        cout<<fun(fun(x)+fun(y))<<endl;
    }
}
