#include<bits/stdc++.h>
using namespace std;
int n,a[20000],k,m;
int main()
{
    int t; scanf("%d",&t);
    while(t--){
            m=INT_MAX;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0; i<=n-k; i++)
     m=m<(a[i+k-1]-a[i])?m:(a[i+k-1]-a[i]);
    printf("%d\n",m);
    }
}
