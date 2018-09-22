#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
using namespace std;

int main()
{
    long long int n,m,i,j,ans;
    cin >>n>>m;
    vector<int> v;
    v.push_back(0);
    for(i=0; i<n; i++)
    {
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    vector<int> :: iterator it=v.end();
    it--;
    i=0; j=0;
    while(it>=v.begin())
    {
        i+=*it;
        j++;
        ans=i-j*(*(it-1));
        if(ans==m)
        {
            cout << *(it-1);
            return 0;
        }
        else if(ans>m)
        {
            cout <<(i-m)/j;
            return 0;
        }
        it--;
    }
    return 0;
}
