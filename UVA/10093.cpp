#include <stdio.h>
#include <string.h>
int main()
{
    char x[10000];
    int a[10000],max,right;
    long int i,j,sum,l;

    while(scanf("%s",&x)==1)
    {
        l=strlen(x);
        sum=0;
        for(i=0;i<l;i++)
        {
            if(x[i]>='A' && x[i]<='Z')
                a[i]=x[i]-55;
            else if(x[i]>='a' && x[i]<='z')
                a[i]=x[i]-61;
            else if(x[i]>='0' && x[i]<='9')
                a[i]=x[i]-48;
            else if(x[i]=='-' || x[i]=='+')
                a[i]=0;
        }
        max=1;
        for(i=0;i<l;i++)
            if(a[i]>max) max=a[i];
        for(i=0;i<l;i++)
            sum+=a[i];
        right=0;
        for(i=max+1;i<=62;i++)
        {
            j=i-1;
            if(sum%j==0)
            {
                right=1;
                break;
            }
        }
        if(right==1)
            printf("%d",i);
        else printf("such number is impossible!");
        printf("\n");
    }
    return 0;
}
