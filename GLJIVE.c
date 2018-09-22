#include <stdio.h>
#include<math.h>
int a[10],b[10];
int max(int b[])
{
    int i,max;
    max=b[0];
    for(i=0; i<10; i++)
    {
        if(abs(max-100)>abs(b[i]-100))
            max=b[i];
        else if(abs(max-100)==abs(b[i]-100))
            max=max>b[i]?max:b[i];
    }
    return max;
}
int main()
{
    int i,j,x;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=1; i<10; i++)
    {
       b[i]+=b[i-1];
    }
    printf("%d",max(b));
    return 0;
}
