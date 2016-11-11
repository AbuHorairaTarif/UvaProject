#include <stdio.h>
#include <string.h>
void parenthesize(int,int);
void add_before(char *);
void add_after(char *);
char mat[11][25];
int m[11][11],s[11][11];
int main()
{
    int n,p[11],test=1;
    register int i,j,k,l,temp;
    for(scanf("%d",&n);n;scanf("%d",&n),test++)
    {
        scanf("%d",p);
        for(i=1;i<n;i++)
        {
            scanf("%d %d",p+i,p+i);
            sprintf(mat[i],"A%d",i);
        }
        scanf("%d",p+i);
        sprintf(mat[i],"A%d",i);
        for(i=1;i<=n;i++)
            m[i][i]=0;
        for(l=2;l<=n;l++)
            for(i=1;i<=n-l+1;i++)
            for(j=i+l-1,m[i][j]=2147483647,k=i;k<j;k++)
            if((temp=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j])<m[i][j])
        {
            m[i][j]=temp;
            s[i][j]=k;
        }
        parenthesize(1,n);
        for(i=1,printf("Case %d: ",test);i<=n;i++)
        {
            if(i!=1)
                printf(" x ");
            printf("%s",mat[i]);
        }
        printf("\n");
    }
    return 0;
}

void parenthesize(int start,int end)
{
    if(end<=start)
        return;
    add_before(mat[start]);
    add_after(mat[end]);
    parenthesize(start,s[start][end]);
    parenthesize(s[start][end]+1,end);
}

void add_before(char *s)
{
    int i=0;
    for(;s[i];i++);
    for(i++;i;i--)
        s[i]=s[i-1];
    s[0]='(';
}

void add_after(char *s)
{
    int i=0;
    for(;s[i];i++);
    s[i]=')';
    s[i+1]=0;
}
