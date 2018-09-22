#include <stdio.h>
int main()
{
    int t,m,i,j,n,x,y;
    char a[201][201];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                {
                    a[i][j]=getchar();
                    if(a[i][j]=='<'||a[i][j]=='>'||a[i][j]=='^'||a[i][j]=='v')
                    {
                        x=i; y=j;
                    }
                }
            getchar();
        }
        i=x; j=y;
        while(i<n && j<m && i>=0 && j>=0)
        {
            if(a[i][j]=='C')
                break;
            if(a[i][j]=='<')
            {
                while(a[i][j-1]!='#' && j>=0)
                    {
                        j--;
                        a[i][j]='x';
                    }
                    j++;
            }
            else if(a[i][j]=='>')
            {
                while(a[i][j+1]!='#' && j<m)
                    {
                        j++;
                         a[i][j]='x';
                    }
                    j--;
            }
            else if(a[i][j]=='^')
            {
                while(a[i-1][j]!='#' && i>=0)
                    {
                        i--;
                         a[i][j]='x';
                    }
                    i++;
            }
            else if(a[i][j]=='v')
            {
                while(a[i+1][j]!='#'&& i<n)
                    {
                        i++;
                         a[i][j]='x';
                    }
                    i--;
            }
            if(a[i][j-1]=='x' || a[i][j-1]=='\\' || a[i][j-1]=='/')
            {
                if(a[i][j+1]=='.')
                    {a[i][j]='x';j++;}
                else if(a[i+1][j]=='.' && i<n)
                {
                    a[i][j]='\\';
                    i++;
                }
                else if(a[i-1][j]=='.' && i>=0)
                {
                    a[i][j]='/';
                    i--;
                }
                else if(a[i][j+1]=='C')
                    a[i][j++]='x';
                else if(a[i+1][j]=='C')
                    a[i++][j]='\\';
                else if(a[i-1][j]=='C')
                    a[i--][j]='/';
            }
            else if(a[i][j+1]=='x' || a[i][j+1]=='\\' ||a[i][j+1]=='/')
            {
                if(a[i][j-1]=='.')
                    {a[i][j]='x';j--;}
                else if(a[i+1][j]=='.')
                {
                    a[i][j]='/';
                    i++;
                }
                else if(a[i-1][j]=='.')
                {
                    a[i][j]='\\';
                }
                else if(a[i][j-1]=='C')
                    a[i][j--]='x';
                else if(a[i+1][j]=='C')
                    a[i++][j]='\\';
                else if(a[i-1][j]=='C')
                    a[i--][j]='/';
            }
            else if(a[i-1][j]=='x' || a[i-1][j]=='\\' || a[i-1][j]=='/')
            {
                if(a[i+1][j]=='.')
                    {a[i][j]='x';i++;}
                else if(a[i][j+1]=='.')
                {
                    a[i][j]='\\';
                    j++;
                }
                else if(a[i][j-1]=='.')
                {
                    a[i][j]='/';
                    j--;
                }
                else if(a[i+1][j]=='C')
                    a[i++][j]='x';
                else if(a[i][j-1]=='C')
                    a[i][j--]='/';
                else if(a[i][j+1]=='C')
                    a[i][j++]='\\';
            }
            else if(a[i+1][j]=='x' || a[i+1][j]=='\\' || a[i+1][j]=='/')
            {
                if(a[i-1][j]=='.')
                    {a[i][j]='x';i--;}
                else if(a[i][j+1]=='.')
                {
                    a[i][j]='/';
                    j++;
                }
                else if(a[i][j-1]=='.')
                {
                    a[i][j]='\\';
                    j--;
                }
                else if(a[i-1][j]=='C')
                    a[i--][j]='x';
                else if(a[i][j-1]=='C')
                    a[i][j--]='/';
                else if(a[i][j+1]=='C')
                    a[i][j++]='\\';
            }
        }
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                    {
                        if(a[i][j]=='x')
                            printf(".");
                        else
                        printf("%c",a[i][j]);
                    }
                printf("\n");
            }
            printf("\n");
    }
    return 0;
}
