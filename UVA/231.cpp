#include<stdio.h>
#include<string.h>

long int misl[32769],s[32769];

main()
{
    long int cas=1,n,k,i,j,res;

    while(scanf("%ld",&n)==1 && n!=-1)
    {
        k=0;
        misl[k++]=n;

        while(scanf("%ld",&n)==1 && n!=-1)
        {
            misl[k++]=n;
        }

        res=0;

        for(i=0 ;i<k ;i++)
        {
            s[i]=1;
            for(j=i-1 ;j>=0 ;j--)
            {
                if(misl[j]>=misl[i] && s[j]+1>s[i])
                {
                    s[i]=s[j]+1;

                    if(s[i]>res)
                        res=s[i];
                }

            }
        }

        if(cas!=1)
            puts("");
        printf("Test #%ld:\n",cas++);
        printf("  maximum possible interceptions: %ld\n",res);

    }
    return 0;
}
