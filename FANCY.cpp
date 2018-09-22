#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; char s[30]; while(t--)
    {
        scanf("%s",s);
        int c=1,n=strlen(s); long long int ans=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                c++;
            }
            else
            {
                ans= ans*(1<<(c-1));
                c=1;
            }
        }
        ans= ans*(1<<(c-1));
        printf("%lld\n",ans);
    }
}