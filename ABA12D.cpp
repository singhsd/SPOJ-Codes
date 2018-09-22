#include <bits/stdc++.h>
using namespace std;
    long long int a[1000003],b[1000003];
int main()
{
    memset(b,0,sizeof b);
    memset(a,0,sizeof a);
    for(int i=2; i*i<=1000000; i++)
    {
        for(int j=i*i; j<=1000000; j+=i)
         {
             if(i==j/i) a[j]+=i;
             else a[j]+=i+j/i;
         }
    }
    b[0]=0; a[1]=1;
    for(int i=2; i<=1000000; i++)
    {
        if(a[i]+i+1>1000000)
        {
            int flag=0;
            for(int k=2; k*k<=1000000; k++)
            if((a[i]+i+1)%k==0) {flag=1; break;}
            if(!flag) b[i]++;
        }
        else
        {
            if(!a[a[i]+i+1]) b[i]++;
        }
        b[i]+=b[i-1];
    }
    int t; cin>>t;
    while(t--)
    {
        int a,bb; cin>>a>>bb;
        cout<<b[bb]-b[a-1]<<endl;
    }
}
