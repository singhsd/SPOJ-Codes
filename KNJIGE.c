#include <stdio.h>
int a[300010],b[600010];
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int k=n;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]=n-1-i;
    }
    for(j=n; j>1; j--)
    {
        if(b[j]>b[j-1])
            {
                count++;
                b[j-1]=k;
                k++;
            }
    }
    printf("%d",count);
    return 0;
}
