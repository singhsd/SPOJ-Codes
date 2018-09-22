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
    int t;
    scanf("%d",&t);
    int n,i,j,temp;
    while(t--)
    {
        temp=-1;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<n; i++)
            if(a[i]>a[i-1])
            temp=i-1;
        if(temp==-1)
        {
            printf("-1\n");
            goto next;
        }
        sort(a,temp+1,n-1);
        for(i=temp+1; i<n; i++)
            if(a[i]>a[temp])
        {
            a[i]=a[i]+a[temp];
            a[temp]=a[i]-a[temp];
            a[i]=a[i]-a[temp];
            break;
        }
        for(i=0; i<n; i++)
            printf("%d",a[i]);
        printf("\n");
        next:
            i=0;
    }
    return 0;
}
