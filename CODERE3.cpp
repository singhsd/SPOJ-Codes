#include <bits/stdc++.h>
using namespace std;
int a[5002],n,lis[5002],lds[5002];
int main()
{
    int t; scanf("%d",&t); while(t--){
    scanf("%d",&n);
    for(int i=0; i<n; i++) {lis[i]=1;lds[i]=1;}
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            if(a[j]<a[i]&&lis[i]<1+lis[j])
                lis[i]=1+lis[j];
    for(int i=n-1; i>=0; i--)
        for(int j=n-1; j>i; j--)
            if(a[j]<a[i]&&lds[i]<1+lds[j])
                lds[i]=1+lds[j];
    int ans=0,kk;
    for(int i=0; i<n; i++)
    {
        kk=lis[i]+lds[i]-1;
        ans=max(ans,kk);
    }
    printf("%d\n",ans);
    }
}
