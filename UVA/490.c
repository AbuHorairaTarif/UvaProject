#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0,n,l,max=0;
    char a[101][103];
    while(gets(a[k])) k++;

    for(i=0;i<k;i++)
    {
        l=strlen(a[i]);
        if(l>max)
            max=l;
        for(j=1;j<100;j++) a[i][j]=' ';
        a[i][100]=NULL;
    }

    for(i=0;i<max;i++)
    {
        for(j=k-1;j>=0;j--)
            printf("%c",a[j][i]);
        printf("\n");
    }
    return 0;
}
