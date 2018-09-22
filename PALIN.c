#include <stdio.h>
#include <string.h>
int ispalin(char a[], int n)
{
    int i;
    for(i=0; i<n/2; i++)
    {
        if(a[i]!=a[n-1-i])
            return 0;
    }
    return 1;
}
int is_small_even(char a[], int n)
{
    int i=0;
    while(a[n/2-1-i]==a[n/2+i])
        i++;
    if(a[n/2-1-i]<a[n/2+i])
        return 0;
    return 1;
}
int is_small_odd(char a[], int n)
{
    int i=1;
    while(a[n/2-i]==a[n/2+i])
        i++;
    if(a[n/2-i]<a[n/2+i])
        return 0;
    return 1;
}
int all_nine(char a[], int n)
{
    int i;
    if(a[n/2]!='9')
        return 0;
    for(i=0; i<n/2; i++)
    {
        if(a[i]!='9' || a[n-1]!='9')
            return 0;
    }
    return 1;
}
int main()
{
    int t,i,j,n,decision;
    char a[1000099];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        n=strlen(a);
        if(n==1)
        {
            if(a[0]=='9')
            {printf("11\n");goto very_end;}
            else
            {a[0]++;printf("%s\n",a);goto very_end;}
        }
        decision=all_nine(a,n);
        if(decision==1)
        {
            printf("1");
            for(i=0; i<n-1; i++)
                printf("0");
            printf("1\n");
            goto very_end;
        }
        decision=ispalin(a,n);
        if(decision==1)
        {
            if(n%2==1)
            {
                if(a[n/2]=='9')
                {
                    a[n/2]='0';
                    i=n/2-1;
                    while(a[i]=='9')
                    {
                        a[i--]='0';
                    }
                    a[i]++;
                    goto link;
                }
                else
                {
                    a[n/2]++;
                    goto end;
                }
            }
            else
            {
                if(a[n/2-1]=='9')
                {
                    i=1;
                    while(a[n/2-i]=='9')
                    {
                        a[n/2-i]='0';
                        a[n/2]='0';
                        i++;
                    }
                    a[n/2-i]++;
                    a[n/2+i-1]++;
                    goto end;
                }
                else
                {
                    a[n/2-1]++; a[n/2]++;
                    goto end;
                }
            }
        }
        else
        {
            if(n%2==0)
            decision=is_small_even(a,n);
            else
            decision=is_small_odd(a,n);
            if(decision==1)
            {
                link:
                for(i=0; i<n/2; i++)
                    a[n-1-i]=a[i];
                goto end;
            }
            else
            {
                if(n%2==0)
                {
                    i=n/2-1;
                    while(a[i]=='9')
                        a[i--]='0';
                    a[i]++;
                    goto link;
                }
                else
                {
                    if(a[n/2]=='9')
                    {
                        a[n/2]='0';
                        i=n/2-1;
                        while(a[i]=='9')
                            a[i--]='0';
                        a[i]++;
                        goto link;
                    }
                    else
                    {
                        a[n/2]++;
                        goto link;
                    }
                }
            }
        }
        end:
            printf("%s\n",a);
        very_end: i=0;
    }
    return 0;
}
