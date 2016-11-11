#include<cstdio>
using namespace std;
bool a[6][6];
int seq[100],cnt=0;
void go(int now,int left){
    if(left==0){
        for(int i=0;i<cnt;i++) printf("%d",seq[i]);
        putchar('\n');
        return;
    }
    for(int i=1;i<=5;i++){
        if(a[now][i]){
            a[now][i]=a[i][now]=false;
            seq[cnt++]=i;
            go(i,left-1);
            a[now][i]=a[i][now]=true;
            cnt--;
        }
    }
}
int main(){
    a[1][2]=a[1][3]=a[1][5]=true;
    a[2][1]=a[2][3]=a[2][5]=true;
    a[3][1]=a[3][2]=a[3][4]=a[3][5]=true;
    a[4][3]=a[4][5]=true;
    a[5][1]=a[5][2]=a[5][3]=a[5][4]=true;
    seq[cnt++]=1;
    go(1,8);
    return 0;
}
