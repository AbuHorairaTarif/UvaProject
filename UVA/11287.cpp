#include <cstdio>
long long int mod;
int num;
int v[3]={2,7,61};
long long int ans[100000];
long long int mod_exp(long long int a,long long int b)
{
    long long int res=1;
    while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
int ck(int b,long long int n)
{
    if(n%2==0) return 0;
    int cnt=0;
    mod=n;
    n--;
    while(n%2==0) { cnt++ ; n/=2;}
    long long int x=mod_exp(b,n);
    for(int i=1;i<=cnt;i++){
        long long int y=mod_exp(x,2);
        if(y==1&&x!=mod-1&&x!=1) return 0;
        x=y;
    }
    if(x!=1) return 0;
    return 1;
}
int ck(int n)
{
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{

    int p,a;
    long long int n1,n2;
    while(1){
        scanf("%d%d",&p,&a);
        if(p==0) break;
        mod=p;
        if(mod_exp(a,p)==a%mod) {

            if(!ck(p)) puts("yes");
            else puts("no");
        }
        else puts("no");
    }
}
