#include <stdio.h>
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
    int t,n,k,a[100],i,s;
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        s=0;i=0;
        while(s<k)
        {
            sort(a,0,n-1);
            a[i]*=-1; s++;
        }
        sum=0;
        for(i=0; i<n; i++)
            sum+=a[i];
        printf("%lld\n",sum);
    }
    return 0;
}
