#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        if(t>1)cout<<endl;
        int a,b,c,d,a1,b1,c1,d1;
        cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
        int a2=max(a,a1);
        int b2=max(b,b1);
        int c2=min(c,c1);
        int d2=min(d,d1);
        if(a2>=c2 || b2>=d2)
            printf("No Overlap\n");
        else
            printf("%d %d %d %d\n",a2,b2,c2,d2);
    }
    return 0;
}
