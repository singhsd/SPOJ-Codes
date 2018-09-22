#include <stdio.h>
int a[1000000];
void merge(int a[], int l, int m, int r)
{
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=r-m;
    int lower[n1],upper[n2];
    for(i=0; i<n1; i++)
        lower[i]=a[i+l];
    for(i=0; i<n2; i++)
        upper[i]=a[m+1+i];
    i=0; //starting index of "lower" array
    j=0;// starting index of "upper array
    k=l; // starting index of array
    while(i<n1 && j<n2)
    {
        if(lower[i]<=upper[j])
        {
            a[k]=lower[i];
            i++;
        }
        else
        {
            a[k]=upper[j];
            j++;
        }
        k++;
    }
    while(i<n1)
        a[k++]=lower[i++];
    while(j<n2)
        a[k++]=upper[j++];
}
void sort(int a[], int l, int r)    //l is the left index and r is the right index of array
{
    if(l<r)
    {
        int m=(l+r)/2;
        sort(a,l,m);
        sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    int t,n,x,i,ans,c=1,flag,friends;
    scanf("%d",&t);
    while(c<=t)
    {
        scanf("%d%d",&x,&n);
        ans=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i];
        }
        if(ans<n)
        {
            printf("Scenario #%d:\nimpossible\n\n",c++);
            continue;
        }
        ans=0; friends=0;
        sort(a,0,n-1); flag=0;
        for(i=n-1; i>=0; i--)
        {
            ans+=a[i];
            friends++;
            if(ans>=x)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Scenario #%d:\nimpossible\n\n",c++);
        else
            printf("Scenario #%d:\n%d\n\n",c++,friends);

    }
    return 0;
}