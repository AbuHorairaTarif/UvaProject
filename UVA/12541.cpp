#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
struct node
{
    char name[20];
    int year;
};
node a[100000];
bool cmp(const node &a,const node &b)
{
    return a.year<b.year;
}
int main()
{
    int i;
    scanf("%d",&n);
    getchar();
    int d,m,y;
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",a[i].name,&d,&m,&y);
        a[i].year=y*10000+m*100+d;
    }
    sort(a,a+n,cmp);
    printf("%s\n%s\n",a[n-1].name,a[0].name);
    return 0;
}
