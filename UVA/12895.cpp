#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char str[10];
int main()
{
    int T,j;
    scanf("%d ",&T);
    for(j=1;j<=T;j++)
    {
        gets(str);
        int n=atoi(str),len=strlen(str),i,f[10];
        double sum=0;
        for(i=0;i<len;i++)
        {
            f[i]=str[i]-48;
            sum=sum+pow(f[i],len);
        }
        if(sum==(double)n)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
