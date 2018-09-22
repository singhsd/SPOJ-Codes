#include<bits/stdc++.h>
using namespace std;
int n,a[50];
int is_safe(int r, int c)
{
    for(int i=1; i<r; i++)
        if(a[i]==c || abs(r-i)==abs(c-a[i]))
            return 0;
    return 1;
}
int solve(int r)
{
    if(r>n) return 1;
    for(int c=1; c<=n; c++)
    {
        if(is_safe(r,c))
        {
            a[r]=c;
            int sol=solve(r+1);
            if(sol) return sol;
        }
    }
    return 0;
}
int main()
{
    int t; scanf("%d",&t); while(t--){
        scanf("%d",&n);
    solve(1);
    for(int i=1; i<=n; i++)
    printf("%d %d\n",i,a[i]);
}
}
