#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,i,j,k,count=0,p=0;
    char s[100][100];
    char c[16][100]=
    {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    if(n>16)
    {
     k=(int)ceil(n/16)+1;
    }
    else
        k=1;
    for(j=0;j<16*k;j++)
    {
        if(count==n)
        count=0;
            if(p==16)
            p=0;
        printf("%s: %s\n",s[count],c[p]);
        count++;
        p++;
    }
    return 0;
}
