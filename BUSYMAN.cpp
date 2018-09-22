// this problem is called activity selection
// http://www.geeksforgeeks.org/greedy-algorithms-set-1-activity-selection-problem/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<int,int> >v;
int t,n,x,y;
int main()
{
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(y,x));
        }
        sort(v.begin(),v.end());
        int ans=1,j=0;
        // ans is no. of activities selected
        //j is index of last selected activity
        for(int i=1; i<n; i++)
        {
            if(v[i].second>=v[j].first)
            {
                ans++;
                j=i;
            }
        }
        cout<<ans<<endl;
    }
}
