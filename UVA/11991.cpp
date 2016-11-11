#include <cstdio>
#include <vector>
#include <map>
using namespace std;
int n,m,a,b;
map<int,vector<int> >s;
int main()
{
    while(scanf("%d%d",&n,&m)==2)
    {
        s.clear();
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a);
            s[a].push_back(i);
        }
        while(m--)
        {
            scanf("%d%d",&b,&a);
            if(s.count(a) &&b<=s[a].size())
                printf("%d\n",s[a][b-1]);
            else
                printf("0\n");
        }
    }
    return 0;
}
