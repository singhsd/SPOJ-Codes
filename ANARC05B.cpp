#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001],n,m;
int main(){
    while(1){
        scanf("%d",&n); if(!n) break;
        for(int i=1; i<=n; i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        for(int i=1; i<=m; i++) scanf("%d",&b[i]);
        int i=1,j=1;
        while(i<=n||j<=m){
            if(i<=n&&j<=m&&a[i]==b[j]){
                a[i]+=a[i-1];
                b[j]+=b[j-1];
                a[i]=max(a[i],b[j]);
                b[j]=a[i]; i++; j++;
            }
            else if(i>n){
                b[j]+=b[j-1]; j++;
            }
            else if(j>m){
                a[i]+=a[i-1]; i++;
            }
            else if(a[i]<b[j]){
                a[i]+=a[i-1]; i++;
            }
            else if(a[i]>b[j]){
                b[j]+=b[j-1]; j++;
            }
        }
        printf("%d\n",max(a[n],b[m]));
    }
}