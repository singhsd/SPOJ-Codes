#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
   long long int k=1,i;
   for( i=1; i<10000001; i++)
   {
       k = k*i;
       if(k%a==0) break;
       k = k%a;
   }
    long long int k2=1,i2;
   for( i2=1; i2<10000001; i2++)
   {
       k2 = k2*i2;
       if(k2%b==0) break;
       k2 = k2%b;
   }
    if(i2<=i) cout<<"0\n";
    else cout<<i2-i<<endl;
}