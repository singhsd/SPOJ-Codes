#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
using namespace std;

int main()
{
    int t,p;
    cin >> t;
    for(p=1; p<=t; p++)
    {
        map<int,int> m;
        int stud,n;
        cin>>stud>>n;
        int a,b; stud=0;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            if(m.find(b)!=m.end()&&m.find(b)->second==a)
                stud=1;
            else
                m[b]=a;
        }
        if(stud)
            printf("Scenario #%d: impossible\n",p);
        else
            printf("Scenario #%d: possible\n",p);
    }
}