//https://github.com/laituan245/spoj-solution/blob/master/classical/ALL.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,d,n;
    vector<int> adjlist[100001];
    int indegree[100001], considered[100001];
    queue<int> disc1queue;
    queue<int> disc2queue;
    int tempx, tempy, current, tcount;
    int ans=100000000;
    while(1)
    {
        ans=100000000;
        scanf("%d%d%d",&n1,&n2,&d);
        n=n1+n2;
        if (n1 == 0 && n2 == 0 && d == 0)
        break;
        for(int i=1; i<=n; i++)
        {
            adjlist[i].clear();
            indegree[i]=0;
        }
        for(int i=0; i<d; i++)
        {
            scanf("%d%d",&tempx,&tempy);
            adjlist[tempy].push_back(tempx);
            indegree[tempx]++;
        }
        while(!disc1queue.empty()) disc1queue.pop();
        while(!disc2queue.empty()) disc2queue.pop();
        for(int i=1; i<=n; i++)
        {
            considered[i]=0;
            if(indegree[i]==0)
            {
                if(i<=n1) disc1queue.push(i);
                else disc2queue.push(i);
            }
        }
        if(!disc1queue.empty())
        {
            tcount=0;
            current=1;
            while(!disc1queue.empty() || !disc2queue.empty())
            {
                if(current==1 && disc1queue.empty())
                {
                    tcount++;
                    current=2;
                }
                else if(current==2 && disc2queue.empty())
                {
                    tcount++;
                    current=1;
                }
                int u;
                if(current==1)
                {
                    u=disc1queue.front();
                    disc1queue.pop();
                }
                else
                {
                    u=disc2queue.front();
                    disc2queue.pop();
                }
                considered[u]=1;
                for(int i=0; i<adjlist[u].size(); i++)
                    if(considered[adjlist[u][i]]==0)
                {
                    indegree[adjlist[u][i]]--;
                    if(indegree[adjlist[u][i]]==0)
                    {
                        if(adjlist[u][i]<=n1)
                            disc1queue.push(adjlist[u][i]);
                        else
                            disc2queue.push(adjlist[u][i]);
                    }
                }

            }
            ans=min(ans,tcount);
        }
        while(!disc1queue.empty()) disc1queue.pop();
        while(!disc2queue.empty()) disc2queue.pop();
        for(int i=1; i<=n; i++)
        {
            considered[i]=0;
            indegree[i]=0;
        }
        for(int i=1; i<=n; i++)
            for(int j=0; j<adjlist[i].size(); j++)
            indegree[adjlist[i][j]]++;
        for(int i=1; i<=n; i++)
        {
            if(indegree[i]==0)
            {
                if(i<=n1) disc1queue.push(i);
                else disc2queue.push(i);
            }
        }
        if(!disc2queue.empty())
        {
            tcount=0;
            current=2;
            while(!disc1queue.empty() || !disc2queue.empty())
            {
                if(current==1 && disc1queue.empty())
                {
                    tcount++;
                    current=2;
                }
                else if(current==2 && disc2queue.empty())
                {
                    tcount++;
                    current=1;
                }
                int u;
                if(current==1)
                {
                    u=disc1queue.front();
                    disc1queue.pop();
                }
                else
                {
                    u=disc2queue.front();
                    disc2queue.pop();
                }
                considered[u]=1;
                for(int i=0; i<adjlist[u].size(); i++)
                    if(considered[adjlist[u][i]]==0)
                {
                    indegree[adjlist[u][i]]--;
                    if(indegree[adjlist[u][i]]==0)
                    {
                        if(adjlist[u][i]<=n1)
                            disc1queue.push(adjlist[u][i]);
                        else
                            disc2queue.push(adjlist[u][i]);
                    }
                }

            }
            ans=min(ans,tcount);
        }
        cout<<ans+2<<endl;
    }
}