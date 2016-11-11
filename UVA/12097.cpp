#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define mem(name,value) memset(name,value,sizeof(name))
using namespace std;
int n,f;
const int maxn=10000+10;
const double PI=acos(-1.0);
const double eps=1e-5;
double A[maxn];
bool ok(double area)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=floor(A[i]/area);
    return sum>=f+1;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&f);
        double maxa=-1;
        for(int i=0;i<n;i++)
        {
            int r;
            scanf("%d",&r);
            A[i]=PI*r*r;
            maxa=max(maxa,A[i]);
        }
        double L=0,R=maxa;
        while(R-L>eps)
        {
            double M=L+(R-L)/2;
            if(ok(M)) L=M;
            else R=M;
        }
        printf("%.4f\n",L);
    }
    return 0;
}
