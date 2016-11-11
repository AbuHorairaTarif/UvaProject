#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
const int N=100005;
int fa1[N],fa2[N];
int fd1(int x)
{
    if(x==fa1[x]) return x;
    return fa1[x]=fd1(fa1[x]);
}
int fd2(int x)
{
    if(x==fa2[x]) return x;
    return fa2[x]=fd2(fa2[x]);
}
int main()
{
    int T,S,B,i,j,L,R;
    while(~scanf("%d%d",&S,&B))
    {
        if(S==0 && B==0) break;
        for(i=0;i<=S+1;++i){
            fa1[i]=i;
            fa2[i]=i;
        }
        for(i=1;i<=B;++i)
        {
            scanf("%d%d",&L,&R);
            for(j=L;j<=R;++j)
            {
                fa1[j]=j-1;
                fa2[j]=j+1;
            }
            int aL,aR;
            aL=fd1(L-1);
            aR=fd2(R+1);
            if(aL==0) printf("*");
            else printf("%d",aL);
            printf(" ");
            if(aR==S+1) printf("*");
            else printf("%d",aR);
            puts("");
        }
        puts("-");
     }
     return 0;
}
