#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
        int k,n; cin>>k;
        n=ceil((double)sqrt(1+8*k));
        n--; n=ceil((double)n/2);
        int s=k-(n*(n-1))/2;
        if(n%2==0)
        {
            printf("TERM %d IS %d/%d\n",k,s,n-s+1);
        }
        else
        {
            printf("TERM %d IS %d/%d\n",k,n-s+1,s);
        }
    }
}