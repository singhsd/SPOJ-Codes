#include <stdio.h>
int pivot(int a[], int l, int r)
{
    int p,i,j,temp;
    p=l; j=r;
    for(i=l+1; i<=j; i++)
    {
        if(a[p]>=a[i])
        {
            temp=a[p]; a[p]=a[i]; a[i]=temp;
            p=i;
        }
        if(a[p]<a[i])
        {
            temp=a[i]; a[i]=a[j]; a[j]=temp;
            j--; i--;
        }
    }
    return p;
}
void qsort(int a[], int l, int r)
{
    if(l<r)
    {
        int pi=pivot(a,l,r);
        qsort(a,l,pi-1);
        qsort(a,pi+1,r);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    qsort(a,0,n-1);
    int j;
    for(i=0; i<n; i++)
    {
        if(i!=n-1){
        j=a[i];
        a[i]=a[i]^a[i+1];
        if(a[i]!=0)
        {
            printf("%d",j);
            break;
        }
        else
            i++;}
        else
            printf("%d",a[i]);

    }
    return 0;
}
