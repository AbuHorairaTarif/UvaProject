#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

#define INF 0x7fffffff
#define eps 1e-12
#define MOD 10000007
#define N 200

using namespace std;

typedef long long LL;

double v[N];
int n;
double D;
double ans;
double Sin[N],Cos[N],Tan[N];

double cal(double dis)
{
    Sin[1]=dis/sqrt(10000.0+dis*dis)+eps;
    Cos[1]=sqrt(1-Sin[1]*Sin[1])+eps;
    Tan[1]=Sin[1]/Cos[1]+eps;
    double tot=Tan[1];
    for(int i=2;i<=n;i++)
    {
        Sin[i]=v[i]/v[1]*Sin[1]+eps;
        Cos[i]=sqrt(1-Sin[i]*Sin[i])+eps;
        Tan[i]=Sin[i]/Cos[i]+eps;
        tot+=Tan[i];
    }
    return tot*100.0;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int ca=1;ca<=t;ca++)
    {
        scanf("%d%lf",&n,&D);
        for(int i=1;i<=n;i++)
            scanf("%lf",v+i);
        double L=0.0 , R=D;
        while(L<R+eps)
        {
            double mid=(L+R)/2;
            if(cal(mid)<D) L=mid+eps;
            else R=mid-eps;
        }
        ans=0.0;
        for(int i=1;i<=n;i++)
            ans+=1.0/v[i]/Cos[i];
        printf("Case %d: %.8lf\n",ca,ans*100.0);
    }
    return 0;
}
