#include <stdio.h>
int a[1000000];
int pivot(int a[], int l, int r)
{
    int p,i,j,temp;
    p=l; j=r;
    for(i=l+1; i<=j; i++)
    {
        if(a[p]>=a[i])              //if element is less than pivot, it is thrown leftwards
        {
            temp=a[p]; a[p]=a[i]; a[i]=temp;
            p=i;
        }
        if(a[p]<a[i])               // if element is greater than pivot, it is thrown to the right
        {
            temp=a[i]; a[i]=a[j]; a[j]=temp;
            j--; i--;
        }
    }
    return p;
}
void qsort(int a[], int l, int r) //l and r are indices of leftmost and rightmost elements of array
{
    if(l<r)
    {
        int pi=pivot(a,l,r); //a[pi] will be in its respective position
        qsort(a,l,pi-1);
        qsort(a,pi+1,r);
    }
}
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,0,n-1);
        long long ans=a[0];
        for(i=1; i<n; i++)
        ans=((ans)*(a[i]-i))%1000000007;
        printf("%d\n",ans);
    }
    printf("KILL BATMAN");
    return 0;
}
