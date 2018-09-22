#include<bits/stdc++.h>
using namespace std;
int fun(string s)
{
    for(int i=0; i<s.size(); i++)
        if(s[i]=='m') return 1;
    return 0;
}
long long int fun2(string s)
{
    long long int k=0;
    for(int i=0; i<s.size(); i++)
        k = 10*k + s[i]-'0';
    return k;
}
int main()
{
    int n; cin>>n; while(n--){
    string s1,s2,s3,s4,s5;
   cin>>s1>>s2>>s3>>s4>>s5;
   if(fun(s1))
   {
       cout<<fun2(s5)-fun2(s3)<<" + "<<s3<<" = "<<s5<<endl;
   }
   else if(fun(s3))
   {
       cout<<s1<<" + "<<fun2(s5)-fun2(s1)<<" = "<<s5<<endl;
   }
   else
   {
       cout<<s1<<" + "<<s3<<" = "<<fun2(s1)+fun2(s3)<<endl;
   }
}
}
