#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        double u,v,w,U,V,W,Volume,a,b=12;
        while(t--)
        {
            cin>>u>>v>>w>>W>>V>>U;
        a=4*(pow(u,2)*pow(v,2)*pow(w,2)) - pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) - pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) - pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) + (pow(v,2)+pow(w,2)-pow(U,2))*(pow(w,2)+pow(u,2)-pow(V,2))*(pow(u,2)+pow(v,2)-pow(W,2));
        Volume=sqrt(a);
        Volume/=b;
        printf("%.4lf\n",Volume);

    }
        return 0;
}