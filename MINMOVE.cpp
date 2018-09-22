#include <bits/stdc++.h>
using namespace std;
string s;
int fun(void)
{
    int n=s.size(); s=s+s;
    int m=0,p=1,k=0; // m is the starting index of reqd substr, p is a counter and k is the size of reqd substr
    while(p<n&&m+k+1<n){
        if(s[m+k]==s[p+k]) k++;
        else if(s[m+k]<s[p+k]){
            p=p+k+1; k=0;
        }
        else if(s[m+k]>s[p+k]){
            m=max(p,m+k+1); k=0; p=m+1;
        }
    } // actual min substr is s.substr(m,n);
    return m;
}
int main()
{
    cin>>s;
    printf("%d\n",fun());
}