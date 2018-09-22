#include <stdio.h>
int a[10000000],b[10000000];
int max(int a[], int n)
{
    int i,max=a[0];
    for(i=1; i<n; i++)
        if(max<a[i])
            max=a[i];
    return max;
}
int main()
{
    int t,x,y,i,max1,max2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        for(i=0; i<x; i++)
            scanf("%d",&a[i]);
        for(i=0; i<y; i++)
            scanf("%d",&b[i]);
        max1=max(a,x);
        max2=max(b,y);
        if(max1>=max2)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}
