#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define N 505
using namespace std;
double x[N], y[N], w[N][N], key[N], ans[N*N];
int n,m,pre[N],hash[N];

inline double getDist(double x1,double y1,double x2,double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

double Prim(){
    memset(hash, 0, sizeof(hash));
    hash[1] = 1;
    for(int i=1; i<=n; ++i){
        key[i] = w[1][i]; pre[i] = 1;
    }
    int k=0;
    for(int i=1; i<n; ++i){
        int u=-1;
        for(int j=1; j<=n; ++j)if(!hash[j]){
            if(u==-1 || key[j]<key[u])
                u=j;
        }
        ans[k++] = key[u];
        hash[u] = 1;
        for(int j=1; j<=n; ++j)if(!hash[j]&&key[j]>w[u][j]){
            key[j]=w[u][j]; pre[j]=u;
        }
    }
    sort(ans, ans+k);
    return ans[k-m];
}

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&m,&n);
        for(int i=1; i<=n; ++i)
            scanf("%lf%lf",&x[i],&y[i]);
        int pos=0;
        memset(w, 0, sizeof(w));
        for(int i=1; i<=n; ++i){
            for(int j=i+1; j<=n; ++j){
                w[i][j]=w[j][i]=getDist(x[i],y[i],x[j],y[j]);
            }
        }
        printf("%.2f\n", Prim());
    }
    return 0;
}
