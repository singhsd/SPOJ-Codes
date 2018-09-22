#include <stdio.h>
int main()
{
    int n,quarter=0,half=0,three_quarters=0,a,b,pizzas=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d/%d",&a,&b);
        if(a==1 && b==2)
            half++;
        else if(a==1 && b==4)
            quarter++;
        else if(a==3 && b==4)
            three_quarters++;
    }
    pizzas+=three_quarters;
    quarter-=three_quarters;
    pizzas+=(half-half%2)/2;
    if(half%2)
    {
        pizzas++;
        quarter-=2;
    }
    if(quarter>0)
    {
        pizzas+=quarter/4;
        if(quarter%4>0)
            pizzas++;
    }
    printf("%d",pizzas);
    return 0;
}
