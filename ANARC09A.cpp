#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cas=1;
    while(1)
    {
        char s[2006];
        scanf("%s",s);
        if(s[0]=='-')
            return 0;
        int n=strlen(s),n1=0,n2=0;
        //cout<<s<<endl;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='{')
                {
                    n1++;
                }
                else
                {
                    if(n1>0)
                         n1--;
                    else n2++;
                }
        }

        int ans=n2/2+n1/2;
        n1%=2; n2%=2;
        ans+=n1+n2;
        printf("%d. %d\n",cas++,ans);
    }
}
