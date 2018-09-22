#include <stdio.h>
int a[1000000];
int main()
{
    int n,i=0,j,temp=0;
    scanf("%d",&n);
    while(1)
    {
        while(n>0)
        {
            temp+=(n%10)*(n%10);
            n/=10;
        }
        a[i++]=temp;
        if(temp==1){
            printf("%d",i);return 0;}
        for(j=0; j<i-1; j++)
            if(a[j]==temp)
            {printf("-1");return 0;}
        n=temp;
        temp=0;
    }
    return 0;
}
