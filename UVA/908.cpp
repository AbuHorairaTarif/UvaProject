#include <cstdio>
#include <algorithm>
#define MAX 1000001
using namespace std;
long int N,M,K,original,parent[MAX],check,cnt,mst;
struct computers
{
    long int x,y,z;
}sites[MAX];

bool acompare(computers lhs,computers rhs)
{
    return lhs.z<rhs.z;
}

void makeset()
{
    for(long int n=1;n<=N;n++)
    {
        parent[n]=n;
    }
}

long int find_out(long int r)
{
    if(parent[r]==r)
        return r;
    else
        return parent[r]=find_out(parent[r]);
}

long int Union(long int a,long int b)
{
    long int u=find_out(a);
    long int v=find_out(b);
    if(u==v);
    else
    {
        check++;
        parent[u]=v;
    }
}

int main()
{
    long int node1,node2,cost,test=1;
    while(scanf("%ld",&N)==1)
    {
        original=0;
        for(long int i=1;i<N;i++)
        {
            scanf("%ld%ld%ld",&node1,&node2,&cost);
            original+=cost;
        }
        scanf("%ld",&K);
        long int i;
        for(i=0;i<K;i++)
        {
            scanf("%ld%ld%ld",&sites[i].x,&sites[i].y,&sites[i].z);
        }
        scanf("%ld",&M);
        for(long int j=0;j<M;j++)
        {
            scanf("%ld%ld%ld",&sites[i].x,&sites[i].y,&sites[i].z);
            i++;
        }
        sort(sites,sites+i,acompare);
        makeset();
        cnt=mst=0;
        for(long int j=0;j<i;j++)
        {
            check=0;
            Union(sites[j].x,sites[j].y);
            if(check!=0)
            {
                mst+=sites[j].z;
                cnt++;
            }
            if(cnt==N)
                break;
        }
        if(test!=1)
            printf("\n");
        test++;
        printf("%ld\n%ld\n",original,mst);
    }
return 0;
}
