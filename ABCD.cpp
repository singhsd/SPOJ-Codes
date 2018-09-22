#include <bits/stdc++.h>
using namespace std;
int n; char s[100001];
int main()
{
    scanf("%d\n%s",&n,s);
    for(int i=0; i<2*n; i+=2)
    {
        int a[]={1,1,1,1},x=-1,y=-1;
        a[s[i]-'A']=0;
        a[s[i+1]-'A']=0;
        for(int j=0; j<4; j++)
            if(a[j])
            {
                if(x==-1) x=j;
                else y=j;
            }
        char c=x+'A',cc=y+'A';
        if(s[i-1]==c)
        {
            s[i]=cc; s[i+1]=c;
        }
        else
        {
            s[i]=c;
            s[i+1]=cc;
        }
    }
    printf("%s",s);
}
