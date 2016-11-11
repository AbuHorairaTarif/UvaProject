#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;
char card[53][53],word[53][53];
char *older[55];
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            older[i]="*";
        }
        for(i=0;i<n;i++)
        {
            scanf("%s %s",card[i],word[i]);
        }
        for(i=0,j=0;i<n;i++)
        {
            for(k=strlen(word[i]);;j=(j+1)%n)
            {
                if(older[j]=="*")
                {
                    k--;
                    if(k<=0)
                    {
                        break;
                    }
                }
            }
            older[j]=card[i];
        }
        for(i=0;i<n-1;i++)
            printf("%s ",older[i]);
        printf("%s\n",older[i]);
    }
    return 0;
}
