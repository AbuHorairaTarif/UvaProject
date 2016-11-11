#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    bool f=false;
    string req,prop,pr,garbage;
    int t=1,r,p,n,mx;
    double m,mn;

    while(scanf("%d%d",&r,&p)==2 && (r+p))
    {
        getchar();
        for(int i=0; i<r; i++) getline(cin,req);

        mx=-1;
        mn=(1<<30);
        for(int i=0; i<p; i++)
        {
            getline(cin,prop);
            scanf("%f %d",&m,&n);
            if(mx<n)
            {
                mx=n;
                mn=m;
                pr=prop;
            }
            else if(mx==n && mn>m)
            {
                mn=m;
                pr=prop;
            }
            getchar();
            while(n--) getline(cin,garbage);
        }

        if(f) puts("");
        printf("RFP #%d\n",t++);
        cout<<pr<<endl;
        f=true;
    }
}
