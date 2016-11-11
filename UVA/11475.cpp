#include <string.h>
#include <stdio.h>
int f[1000100];
char a[1000100],b[1000100];
void preKMP()
{
    int i,m=strlen(b),k;
    f[0]=-1;
    for(i=1;i<=m;i++)
    {
        k=f[i-1];
        while(k>=0)
        {
            if(b[k]==b[i-1])
                break;
            else
                k=f[k];
        }
        f[i]=k+1;
    }
}
int KMP()
{
    int m=strlen(b);
    int n=strlen(a);
    int cnt=0;
    preKMP();
    int i=0,k=0;
    while(i<n)
    {
        if(k==-1)
        {
            i++;
            k=0;
        }
        else if(a[i]==b[k])
        {
            i++;
            k++;
            if(k==m)
            {
                return k;
            }
        }
        else
            k=f[k];
    }
    return k;
}
int main()
{
    int k,p,q,r,x,i,j,l,v;
    while(scanf("%s",a)!=EOF)
    {
        memset(b,0,sizeof(b));
        memset(f,0,sizeof(f));
        l=strlen(a);
        v=0;
        j=0;
        for(i=0;i<l;i++)
        {
            b[j++]=a[l-1-i];
        }
        v=KMP();
        printf("%s",a);
        for(i=l-v-1;i>=0;i--)
            printf("%c",a[i]);
        puts("");
    }
    return 0;
}
