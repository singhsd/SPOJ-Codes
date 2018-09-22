#include <iostream>
#include <numeric>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

double r,l,ss,h,pi=3.1415;

void getv(char s[])
{
    int i=0,j=0,n=strlen(s);
    char x[100];
    while(s[i]!='e')
    {
        x[i]=s[i];
        i++;
    }
    r=atof(x);
    i++;
    char y[50];
    while(s[i]!='e')
    {
        y[j]=s[i];
        i++;j++;
    }
    ss=atof(y);
    i++;
    j=0;
    char z[50];
    while(i<n)
    {
        z[j]=s[i];
        i++;j++;
    }
    h=atof(z);
    return;
}
int main()
{
    int t,ans;
    cin >> t;
    char s[100];
    while(t--)
    {
        cin >> s;getv(s);
        l=sqrt(r*r+h*h);
        r=pi*l*r;
        r=ss*r;
        ans=ceil(r);
        cout << ans <<endl;
    }
    return 0;
}
