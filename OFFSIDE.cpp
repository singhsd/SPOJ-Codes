#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t1,z1,z2,z3;
  while(1)
  {
      cin>>a>>b; if(a==0 && b==0) break;
      z1=INT_MAX;z2=INT_MAX;z3;
      for(int i=0; i<a; i++)
      {
          cin>>t1;
          z1=z1<t1?z1:t1;
      }
      z3=z1; z1=INT_MAX;
      for(int i=0; i<b; i++)
      {
          cin>>t1;
          if(z1>t1)
          {
              z2=z1; z1=t1; continue;
          }
          else if(z2>t1) z2=t1;
      }
      if(z3<z2) cout<<"Y\n";
      else cout<<"N\n";
  }
}