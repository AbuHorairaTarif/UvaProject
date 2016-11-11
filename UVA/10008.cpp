#include <stdio.h>
#include <string.h>
int alph[26];
int now;
int main()
{
    int copyAlph[26],i,j,k,line_numb,l,c=0,a,b,t,m,count,temp=-1;
    char line[600];
    scanf("%d",&line_numb);
    for(j=0;j<=line_numb;j++)
    {
        gets(line);
        i=strlen(line);
        for(k=0;k<i;k++)
        {
            for(l=0;l<26;l++)
            {
                if(line[k]=='a'+l || line[k]=='A'+l)
                    alph[l]++;
            }
        }
    }
    for(l=0;l<26;l++)
        copyAlph[l]=alph[l];
    for(a=1;a<26;++a)
        for(b=25;b>=a;--b)
    {
        if(alph[b-1]<alph[b])
        {
            t=alph[b-1];
            alph[b-1]=alph[b];
            alph[b]=t;
        }
    }
    for(l=0;l<26;l++)
    {
        count=1;
        if(alph[l])
        {
            if(alph[l]==alph[l-1])
            {

            }
            else now=0;
            for(m=now;m<26;m++)
            {
                if((copyAlph[m]==alph[l]) && count==1 && temp !=m)
                {
                    printf("%c %d\n",'A'+m,alph[l]);
                    temp=m;
                    now=m;
                    count++;
                }
            }
        }
    }
    return 0;
}
