#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int d,m,y,t;
int main()
{
    cin>>t;
    int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1; i<13; i++) a[i]+=a[i-1];
    while(t--)
    {
        cin>>d>>m>>y;
        ll ans=0;
        for(int i=2012; i<y; i++)
        {
            ans+=365ll;
            if((i%400==0)||(i%4==0&&i%100!=0)) ans++;
        }
        ans+=a[m-1];
        ans+=d;
        if((y%400==0)|(y%4==0&&y%100!=0))
        {
            if(m>2) ans++;
        }
        ans%=7;
        switch(ans)
        {
        case(0): cout<<"Saturday\n";
                break;
         case(1): cout<<"Sunday\n";
                break;
         case(2): cout<<"Monday\n";
                break;
         case(3): cout<<"Tuesday\n";
                break;
         case(4): cout<<"Wednesday\n";
                break;;
         case(5): cout<<"Thursday\n";
                break;
         case(6): cout<<"Friday\n";
                break;
        }
    }
}
