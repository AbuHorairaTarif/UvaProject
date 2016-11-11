#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int n;
        scanf("%d",&n);
        int cnt[10];

        memset(cnt,0,sizeof cnt);

        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp)
            {
                cnt[temp%10]++;
                temp/=10;
            }

        }
        for(int i=0;i<9;i++)
            printf("%d ",cnt[i]);
        printf("%d\n",cnt[9]);
    }
    return 0;
}
