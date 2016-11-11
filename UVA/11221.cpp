#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    bool flag;
    int T,l,sq;
    string line,v,a,b,c,d;
    scanf("%d",&T);
    getchar();
    for(int t=1;t<=T;t++)
    {
        v.clear();
        a.clear();
        b.clear();
        c.clear();
        d.clear();

        getline(cin,line);

        for(int i=0;i<line.size();i++)
            if('a'<=line[i]&&line[i]<='z')
            v+=line[i];

        l=v.size();
        sq=sqrt(l);
        if(sq*sq!=l) flag=0;
        else
        {
            for(int i=0;i<sq;i++)
                a+=v[i];
            for(int i=0,j=0;i<sq;i++,j+=sq)
                b+=v[j];
            for(int i=0,j=l-1;i<sq;i++,j--)
                c+=v[j];
            for(int i=0,j=l-1;i<sq;i++,j-=sq)
                d+=v[j];

            if(a==b && a==c && a==d) flag=1;
            else flag=0;
        }
        printf("Case #%d:\n",t);
        if(flag) printf("%d\n",sq);
        else puts("No magic :(");
    }
    return 0;
}
