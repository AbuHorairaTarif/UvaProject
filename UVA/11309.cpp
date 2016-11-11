#include <cstdio>
int main()
{
    int t,h,m;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d:%d",&h,&m);
            int sum=h*100+m,flag=0;
            for(int i=sum+1;i<=2359;i++)
            {
                if(i%100>=60) continue;
                int temp=i,top=0,judge=1,clock[4]={0};
                while(temp)
                {
                    clock[top++]=temp%10;
                    temp/=10;
                }
                if(top&1)
                {
                    for(int i=top/2+1,j=top/2-1;j>=0;i++,j--)
                        if(clock[i]!=clock[j]) judge=0;
                }
                else {
                    for(int i=top/2-1,j=top/2;i>=0;i--,j++)
                        if(clock[i]!=clock[j]) judge=0;
                }
                if(judge)
                {
                    printf("%d%d:%d%d\n",clock[3],clock[2],clock[1],clock[0]);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                puts("00:00");
        }
    }
    return 0;
}
