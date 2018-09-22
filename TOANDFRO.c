#include <stdio.h>
#include<string.h>
int main()
{
    int n1,n2,i,j,k=0;
    char a[100][100],c[250];
    while(1){
    scanf("%d",&n2);
    if(n2==0)
        return 0;
    scanf("%s",c);
    n1=strlen(c)/n2;
    k=0;
    for(i=0; i<n1; i++)
    {
        if(i%2==0)
            {for(j=0; j<n2; j++)
            a[i][j]=c[k++];}
        else
            {for(j=n2-1; j>=0; j--)
            a[i][j]=c[k++];}
    }
    for(i=0; i<n2; i++)
        for(j=0; j<n1; j++)
            {printf("%c",a[j][i]); }
    printf("\n");
    }
    return 0;
}
