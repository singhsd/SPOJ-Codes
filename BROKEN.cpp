#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,a[260],t; char s[1000001],c;
int main()
{
    while(true)
    {
        scanf("%d\n",&n);
        if(!n) return 0; t=0;
        memset(a,0,sizeof a);
        while((c=getchar())!='\n') s[t++]=c;
        s[t]='\0';
        //cout<<s<<endl;
        int m=t,k=0,ans=0,i=0;
        for(int j=0; j<m; j++)
        {
            a[s[j]]++;
            if(a[s[j]]==1) k++;
            if(k>n)
            {
                while(k>n)
                {
                    if(a[s[i]]==1)
                    {
                        k--;
                    }
                    i++;
                    a[s[i-1]]--;
                }
            }
            ans=max(ans,j-i+1);//cout<<s[i]<<" "<<(int)s[i]<<" "<<s[j]<<" "<<k<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
