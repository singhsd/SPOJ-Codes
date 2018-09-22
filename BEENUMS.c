#include <stdio.h>
int a[100000000];
int main()
{
    int n,i,j=1,mid,flag,x;
    a[0]=1; i=0;
    while(a[i++]<=1000000000)
    {
        a[i]=6*(j++)+a[i-1];
    }
    x=i-1;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            return 0;
        j=x; i=0; flag=0;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(a[mid]==n)
            {
                flag=1;
                break;
            }
            else if(a[mid]<n)
                i=mid+1;
            else
                j=mid-1;
        }
        if(flag==0)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
