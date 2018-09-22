#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=1; i*i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(i*j<=n)
                count++;
            else
                goto next;
        }
        next:
            printf("");
    }
    printf("%d",count);
}
