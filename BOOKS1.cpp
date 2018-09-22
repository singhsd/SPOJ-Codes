#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,k,a[501]; ll sum=0;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=(sum+a[i]);
        }
        sum= sum/k;
        ll s=0,c=1;
        for(int i=0; i<n; i++)
        {
            s+=a[i];
            if(s<=sum||c>=k) cout<<a[i]<<" ";
            else if(s>sum && c<k)
            {
                c++;
                cout<<"/ ";
                s=0;
                i--;
            }
        }
        cout<<endl;
    }
}
