#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int kase,test,i;
    scanf("%d",&kase);
    for(test=1;test<=kase;test++)
    {
        int i,j,count=0,n,k,track=0;
        char c[505],ch;
        scanf("%d%d%c",&n,&k,&ch);
        scanf("%s",c);
        for(i=1;i<n;i++)
        {
            track=0;
            for(j=i-k;j<i;j++)
            {
                if(j<0)
                    j=0;
                if(c[i]==c[j])
                {
                    track++;
                    break;
                }
            }
            if(track>0)
            {
                count++;
            }
        }
        printf("Case %d: %d\n",test,count);
    }
    return 0;
}
