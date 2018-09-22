#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,c; cin>>a>>b>>c;
        if(!a&&!b&&!c) return 0;
        if(2*b==a+c)
        {
            printf("AP %d\n",c+c-b);
        }
        else if(b*b==a*c)
        {
            if(a&&b&&c)
            printf("GP %d\n",c*c/b);
            else
            printf("GP 0\n");
        }
    }
}
