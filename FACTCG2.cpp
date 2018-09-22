#include<bits/stdc++.h>
using namespace std;
int a[10000001]={0};
int main()
{
    for(int i=2; i*i<=10000000; i++)
    {
        if(a[i]==0){
        for(int j=i*i; j<=10000000; j+=i)
        {
            if(a[j]==0) a[j]=i;
        }
        }
    }
        int n;
        while(scanf("%d",&n)!=EOF){
        printf("1");
        if(n==1) {printf("\n");continue;}
        if(a[n]!=0)
        while(n%a[n]==0)
        {
            printf(" x %d",a[n]);
            if(a[n]==0) break;
            n/=a[n];
            if(a[n]==0) break;
        }
        printf(" x %d\n",n);
        }
}